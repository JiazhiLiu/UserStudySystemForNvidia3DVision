#include "UserStudyMainWindow.h"


UserStudyMainWindow::UserStudyMainWindow(QWidget *parent)
	: QMainWindow(parent),
	m_nvidia3D(false)
{
	ui.setupUi(this);
	initStatusBar();
	initSignalSlots();
	checkDisplayMode();

}

UserStudyMainWindow::~UserStudyMainWindow()
{
}

void UserStudyMainWindow::on_Exp1()
{
	Experiment1 *widget = new Experiment1(this);
	setCentralWidget(widget);
}

void UserStudyMainWindow::on_Exp2()
{
	Experiment2 *Exp2Widget = new Experiment2(this);
	setCentralWidget(Exp2Widget);
}

void UserStudyMainWindow::on_colorTest()
{
	ColorTestWidget *widget = new ColorTestWidget(this);
	connect(widget, SIGNAL(reportColorTestResults(int)), this, SLOT(on_receiveColorResults(int)));
	widget->exec();
	
}

void UserStudyMainWindow::on_3DDeviceCheck()
{
	Device3DCheckWidget *widget = new Device3DCheckWidget(m_nvidia3D, this);
	connect(widget, SIGNAL(reportResults(bool)), this, SLOT(on_receive3DDeviceResults(bool)));
	widget->exec();
}

void UserStudyMainWindow::on_stereoTest()
{
	StereoTestWidget *widget = new StereoTestWidget(m_nvidia3D, this);
	connect(widget, SIGNAL(reportResults(int)), this, SLOT(on_receiveStereoResults(int)));
	widget->exec();
}

void UserStudyMainWindow::on_nvidia3D()
{
	m_nvidia3D = true;
	checkDisplayMode();
}

void UserStudyMainWindow::on_normalShutter3D()
{
	m_nvidia3D = false;
	checkDisplayMode();
}

void UserStudyMainWindow::on_receiveColorResults(int result)
{
	m_colorTestResult->setText(QString::number(result));
	QL_colorResult->setText(m_colorTestResult->text() + QString("/15"));
	emit reportColorBlindResults(result);

	
}

void UserStudyMainWindow::on_receive3DDeviceResults(bool result)
{
	m_3DDeviceResult->setText(QString::number(int(result)));
	if (result)
		QL_3DDeviceResult->setText("<font color='green'>Well</font>");
	else
		QL_3DDeviceResult->setText("<font color='red'>Wrong!</font>");
	emit report3DDeviceResults(result);
}

void UserStudyMainWindow::on_receiveStereoResults(int result)
{
	m_stereoResult->setText(QString::number(result));
	QL_stereoTestResult->setText(m_stereoResult->text() + QString("/9"));
	emit reportStereoBlindResults(result);
}


void UserStudyMainWindow::on_resetStatusBar()
{
	QL_colorResult->setText("TO DO!");
	QL_3DDeviceResult->setText("TO DO!");
	QL_stereoTestResult->setText("TO DO!");
}

void UserStudyMainWindow::initStatusBar()
{
	m_colorTestResult = new QLabel(this);
	m_3DDeviceResult = new QLabel(this);
	m_stereoResult = new QLabel(this);
	m_colorTestResult->setText(QString::number(-1));			// 1000 indicates the test has been tested.
	m_3DDeviceResult->setText(QString::number(-1));
	m_stereoResult->setText(QString::number(-1));
	m_colorTestResult->setVisible(false);
	m_3DDeviceResult->setVisible(false);
	m_stereoResult->setVisible(false);
	m_colorTestResult->setObjectName(QString("colorBlindTestResult"));
	m_3DDeviceResult->setObjectName(QString("3DDeviceCheckResult"));
	m_stereoResult->setObjectName(QString("stereoBlindTestResult"));

	statusLabelDisplayMode = new QLabel;
	statusLabelDisplayMode->setMinimumSize(82, 20);
	ui.statusBar->addWidget(statusLabelDisplayMode);
	statusLabelDisplayMode->setText(QStringLiteral("<b>Display Mode</b>"));
	QL_displayMode = new QLabel;
	QL_displayMode->setMinimumSize(200, 20);
	ui.statusBar->addWidget(QL_displayMode);
	checkDisplayMode();

	statusLabelColorTest = new QLabel;
	statusLabelColorTest->setMinimumSize(130, 20);
	ui.statusBar->addWidget(statusLabelColorTest);
	statusLabelColorTest->setText(QStringLiteral("<b>Color Blind Test Result</b>"));
	QL_colorResult = new QLabel;
	QL_colorResult->setMinimumSize(120, 20);
	ui.statusBar->addWidget(QL_colorResult);
	QL_colorResult->setText("TO DO!");


	statusLabel3DDeviceCheck = new QLabel;
	statusLabel3DDeviceCheck->setMinimumSize(130, 20);
	ui.statusBar->addWidget(statusLabel3DDeviceCheck);
	statusLabel3DDeviceCheck->setText(QStringLiteral("<b>3D Device Check Result</b>"));
	QL_3DDeviceResult = new QLabel;
	QL_3DDeviceResult->setMinimumSize(120, 20);
	ui.statusBar->addWidget(QL_3DDeviceResult);
	QL_3DDeviceResult->setText("TO DO!");

	statusLabelStereoTest = new QLabel;
	statusLabelStereoTest->setMinimumSize(130, 20);
	ui.statusBar->addWidget(statusLabelStereoTest);
	statusLabelStereoTest->setText(QStringLiteral("<b>Stereo Blind Test Result</b>"));
	QL_stereoTestResult = new QLabel;
	QL_stereoTestResult->setMinimumSize(120, 20);
	ui.statusBar->addWidget(QL_stereoTestResult);
	QL_stereoTestResult->setText("TO DO!");
}

void UserStudyMainWindow::initSignalSlots()
{
	connect(ui.actionExp1, SIGNAL(triggered()), this, SLOT(on_Exp1()));
	connect(ui.actionExp2, SIGNAL(triggered()), this, SLOT(on_Exp2()));
	connect(ui.actionColor, SIGNAL(triggered()), this, SLOT(on_colorTest()));
	connect(ui.actionStereo, SIGNAL(triggered()), this, SLOT(on_stereoTest()));
	connect(ui.action3DDevice, SIGNAL(triggered()), this, SLOT(on_3DDeviceCheck()));
	connect(ui.actionNVIDIA3D, SIGNAL(triggered()), this, SLOT(on_nvidia3D()));
	connect(ui.actionCommonShutter, SIGNAL(triggered()), this, SLOT(on_normalShutter3D()));
	connect(this, SIGNAL(statusBarUpdatedSignal()), this, SLOT(on_updateStatusBar()));
}

void UserStudyMainWindow::checkDisplayMode()
{
	if (m_nvidia3D)
		QL_displayMode->setText("NVIDIA VISION 3D");
	else
		QL_displayMode->setText("COMMON SHUTTER 3D");
}
