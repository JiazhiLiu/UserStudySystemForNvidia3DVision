#pragma once
#include <qmainwindow.h>
#include<qlabel.h>
#include "Device3DCheckWidget.h"
#include "ColorTestWidget.h"
#include "StereoTestWidget.h"
#include "Experiment1.h"
#include "Experiment2.h"


#include "ui_MainWindowForm.h"


class UserStudyMainWindow :
	public QMainWindow
{
	Q_OBJECT

public:
	UserStudyMainWindow(QWidget *parent = Q_NULLPTR);
	~UserStudyMainWindow();

private:
	Ui::UserStudyMainWindow ui;

private slots:
	void on_Exp1();
	void on_Exp2();
	void on_colorTest();
	void on_3DDeviceCheck();
	void on_stereoTest();
	void on_nvidia3D();
	void on_normalShutter3D();

	void on_receiveColorResults(int result);
	void on_receive3DDeviceResults(bool result);
	void on_receiveStereoResults(int result);
	void on_resetStatusBar();

private:
	void initStatusBar();
	void initSignalSlots();
	void checkDisplayMode();

	QLabel *statusLabelDisplayMode;
	QLabel *statusLabelColorTest;
	QLabel *statusLabel3DDeviceCheck;
	QLabel *statusLabelStereoTest;
	QLabel *QL_displayMode;
	QLabel *QL_colorResult;
	QLabel *QL_3DDeviceResult;
	QLabel *QL_stereoTestResult;

private:
	QLabel *m_colorTestResult;
	QLabel *m_3DDeviceResult;
	QLabel *m_stereoResult;
	bool m_nvidia3D;

signals:
	void report3DDeviceResults(bool);
	void reportColorBlindResults(int);
	void reportStereoBlindResults(int);

};

