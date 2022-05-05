#include <opencv2/opencv.hpp>
#include <qlabel.h>
#include "Display3DWidget.h"



Display3DWidget::Display3DWidget(bool isNvidia3D, QWidget* parent):
	QWidget(parent),
	m_screenFrameRate(0),
	m_videoFrameRate(0),
	m_count(0),
	m_nvidia3D(isNvidia3D),
	m_isright(false),
	m_framesNum(1),
	m_videoOrImage(0)
{
	setAttribute(Qt::WA_PaintOnScreen);
	setAttribute(Qt::WA_NativeWindow);

	m_timerScreen = std::make_unique<StepTimer>();
	m_timerVideo = std::make_unique<StepTimer>();
	m_dxwidget = std::make_shared<DXWidget>((HWND)winId());

	//loadImage("./videos/blender.png", "./videos/blender2.png", 1, false);
	//loadVideo("./videos/stereo.mp4", "./videos/stereo.mp4",1, false);
}


Display3DWidget::~Display3DWidget()
{

}

void Display3DWidget::loadVideo(std::string fileleftSide, std::string filerightSide, int mode, bool isCompared)
{
	m_videoOrImage = 1;

	m_dxwidget->UpdateDisplayMode(mode);
	m_dxwidget->SetComparison(isCompared);

	cv::VideoCapture capture(fileleftSide);
	m_imgHeight = capture.get(cv::CAP_PROP_FRAME_HEIGHT);
	m_imgWidth = capture.get(cv::CAP_PROP_FRAME_WIDTH);
	m_framesNum = capture.get(cv::CAP_PROP_FRAME_COUNT) > 150 ? 150 : capture.get(cv::CAP_PROP_FRAME_COUNT);	
	m_dxwidget->UpdateImageSize(m_imgWidth, m_imgHeight);
	m_dxwidget->SetTexturesNum(m_framesNum);
	// be careful!!! m_framesNum should not be too large, because we directly allocate the memory at once. 

	cv::VideoCapture capture1;
	if (isCompared) {
		capture1.open(filerightSide);
		int imgHeight1 = capture.get(cv::CAP_PROP_FRAME_HEIGHT);
		int imgWidth1 = capture.get(cv::CAP_PROP_FRAME_WIDTH);
		int framesNum1 = capture.get(cv::CAP_PROP_FRAME_COUNT);
		if (m_imgHeight != imgHeight1 && m_imgWidth != imgWidth1 && m_framesNum != framesNum1)
			MessageBoxA(0, "please make sure the two files have the same frame height, width, and frame number", "error", 0);
	}
	
	cv::Mat frame;
	for (int i = 0; i < m_framesNum; ++i) {
		capture >> frame;
		m_dxwidget->CreateShaderResourceLeftSide(frame, i);
		if (isCompared) {
			capture1 >> frame;
			m_dxwidget->CreateShaderResourceRightSide(frame, i);
		}
	}
}

void Display3DWidget::loadImage(std::string leftSideFile, std::string rightSideFile, int mode, bool isCompared)
{
	m_videoOrImage = 0;

	m_dxwidget->UpdateDisplayMode(mode);
	m_dxwidget->SetComparison(isCompared);

	cv::Mat frameleft, frameright;
	frameleft = cv::imread(leftSideFile);
	m_imgHeight = frameleft.size().height;
	m_imgWidth = frameleft.size().width;
	m_framesNum = 1;

	m_dxwidget->UpdateImageSize(m_imgWidth, m_imgHeight);
	m_dxwidget->SetTexturesNum(1);
	m_dxwidget->CreateShaderResourceLeftSide(frameleft, 0);
	if (isCompared) {
		frameright = cv::imread(rightSideFile);
		m_dxwidget->CreateShaderResourceRightSide(frameright, 0);
	}
}

void Display3DWidget::paintEvent(QPaintEvent * event)
{
	if (m_timerScreen->GetFrameStatus()) {
		m_count = (m_count + 1) %  m_framesNum;
		m_timerScreen->SetFrameStatus();
		m_videoFrameRate = m_videoOrImage * m_timerVideo->GetFramesPerSecond();
	}
	if (m_nvidia3D) {
		m_dxwidget->Render(false, m_count);
		m_dxwidget->Render(true, m_count);
		m_screenFrameRate = 2 * m_timerScreen->GetFramesPerSecond();
		setScreenFrameRate();
	}
	else {
		m_dxwidget->Render2D(m_isright, m_count);
		m_isright = !m_isright;
		m_screenFrameRate = m_timerScreen->GetFramesPerSecond();
		setScreenFrameRate();
	}
	//this->setWindowTitle(QString::asprintf("Screen Frame Rate: %dHz, Video Frame Rate: %dHz", getScreenFrameRate(), getVideoFrameRate()));
	updateParentWidgetRate();
	m_dxwidget->Present();
	update();
	
}

void Display3DWidget::resizeEvent(QResizeEvent * event)
{
	m_dxwidget->UpdateWindowSize(this->width(), this->height());
}

void Display3DWidget::setScreenFrameRate()
{
	const QWidget *parent = this->parentWidget();
	if (parent != Q_NULLPTR && parent->findChild<QLabel*>("ScreenVideoRate")) {
		parent->findChild<QLabel*>("ScreenVideoRate")->setText(QString::asprintf("Screen Rate: %3dHz    Video Rate: %dHz", (m_nvidia3D+1) * getScreenFrameRate(), getVideoFrameRate()));
	}
}

void Display3DWidget::updateParentWidgetRate()
{
	if (parentWidget()->findChild<QLabel*>("lbScreenRate"))
	{
		parentWidget()->findChild<QLabel*>("lbScreenRate")->setText(QString::asprintf("Screen Frame Rate: %dHz", getScreenFrameRate()));
	}
	if (parentWidget()->findChild<QLabel*>("lbVideoRate"))
	{
		parentWidget()->findChild<QLabel*>("lbVideoRate")->setText(QString::asprintf("Video Frame Rate: %dHz", getVideoFrameRate()));
	}
}

