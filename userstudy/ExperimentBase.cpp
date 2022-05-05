#include "ExperimentBase.h"
#include <vector>
#include <stdio.h>

ExperimentBase::ExperimentBase(QWidget *parent)
	:QWidget(parent)
{
	ui.setupUi(this);

	connect(ui.pbtnColor, SIGNAL(clicked()), parent, SLOT(on_colorTest()));
	connect(ui.pbtnDevice, SIGNAL(clicked()), parent, SLOT(on_3DDeviceCheck()));
	connect(ui.pbtnStereo, SIGNAL(clicked()), parent, SLOT(on_stereoTest()));
	connect(ui.pbtn1, SIGNAL(clicked()), this, SLOT(on_begin1()));
	connect(ui.pbtn2, SIGNAL(clicked()), this, SLOT(on_begin2()));
	connect(ui.pbtn3, SIGNAL(clicked()), this, SLOT(on_begin3()));
	connect(this, SIGNAL(toResetStatusBar()), parent, SLOT(on_resetStatusBar()));
	connect(parent, SIGNAL(report3DDeviceResults(bool)), this, SLOT(on_receive3DDeviceResults(bool)));
	connect(parent, SIGNAL(reportStereoBlindResults(int)), this, SLOT(on_receiveStereoBlindResults(int)));
	connect(parent, SIGNAL(reportColorBlindResults(int)), this, SLOT(on_receiveColorBlindResults(int)));

	emit toResetStatusBar();
}

ExperimentBase::~ExperimentBase()
{
}

bool ExperimentBase::ifPassedPreTests()
{
	int colorResult = -1, deviceResult = -1, stereoResult = -1;
	if (parentWidget()->findChild<QLabel*>("colorBlindTestResult"))
		colorResult = parentWidget()->findChild<QLabel*>("colorBlindTestResult")->text().toInt();
	if (parentWidget()->findChild<QLabel*>("3DDeviceCheckResult"))
		deviceResult = parentWidget()->findChild<QLabel*>("3DDeviceCheckResult")->text().toInt();
	if (parentWidget()->findChild<QLabel*>("stereoBlindTestResult"))
		stereoResult = parentWidget()->findChild<QLabel*>("stereoBlindTestResult")->text().toInt();
	if (colorResult <= 14 || deviceResult != 1 || stereoResult < 8) {
		MessageBoxA(0, "Make sure you have passed \"3D Device Check\", \"Color Blind Test\", \"Stereo Blind Test\".", "Warning", 0);
		return true;
	}
	else
	{
		MessageBoxA(0, "Sorry, you cannot take part in the test because you haven't passed the basic tests!", "Error", 0);
		return true;
	}
}

void ExperimentBase::on_session1()
{
}

void ExperimentBase::on_session2()
{
}

void ExperimentBase::on_session3()
{

}



void ExperimentBase::on_receiveColorBlindResults(int result)
{
	char str[50];
	
	if (result <= 14)
		sprintf(str, "<font color=red> Not passed. The result is %d/15</font>", result);
	else 
		sprintf(str, "<font color=green> Passed. The result is %d/15</font>", result);
	ui.colorblind_result->setText(str);

}

void ExperimentBase::on_receive3DDeviceResults(bool result)
{
	if (result)
		ui.device_result->setText("<font color='green'>Well</font>");
	else
		ui.device_result->setText("<font color='red'>Wrong</font>");
}

void ExperimentBase::on_receiveStereoBlindResults(int result)
{
	char str[50];

	if (result <= 7)
		sprintf(str, "<font color=red> Not passed. The result is %d/9</font>", result);
	else
		sprintf(str, "<font color=green> Passed. The result is %d/9</font>", result);
	ui.stereoblind_result->setText(str);
}



