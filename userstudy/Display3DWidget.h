#pragma once
#include <opencv2/opencv.hpp>
#include <qwidget.h>
#include <atomic>
#include "DXWidget.h"
#include "StepTimer.h"

class Display3DWidget :
	public QWidget
{
	Q_OBJECT
public:
	Display3DWidget(bool isNvidia3D = false, QWidget* parent = Q_NULLPTR);
	~Display3DWidget();

	
	void loadVideo(std::string fileleftSide, std::string filerightSide, int mode, bool isCompared);
	void loadImage(std::string leftSideFile, std::string rightSideFile, int mode, bool isCompared);	
	// // note that the video it can load should be lower than 5 seconds because of limited memory
	// mode: 0, no 3D output, only output the left image; 1, up-down 3D output; 2, left-right 3D output
	// isCompared: whether to display two stimuli side by side on a single screen

	int getScreenFrameRate() { return m_screenFrameRate; }
	int getVideoFrameRate() { return m_videoFrameRate; }

private:
	virtual void paintEvent(QPaintEvent* event) override;
	virtual void resizeEvent(QResizeEvent *event) override;

	void setNvidia3D(bool nvidia3D) { m_nvidia3D = nvidia3D; }
	void setScreenFrameRate();
	void updateParentWidgetRate();

private:
	std::unique_ptr<StepTimer> m_timerScreen;
	std::unique_ptr<StepTimer> m_timerVideo;
	std::atomic<int> m_screenFrameRate;
	std::atomic<int> m_videoFrameRate;


	std::shared_ptr<DXWidget> m_dxwidget;
	bool m_nvidia3D;					// whether support nvidia 3D vision. You'd better set it manually
	bool m_isright;
	int m_count;
	int m_imgHeight;
	int m_imgWidth;
	int m_framesNum;
	int m_videoOrImage;					// the widget is displaying video or image. video: 1; image: 0;
};

