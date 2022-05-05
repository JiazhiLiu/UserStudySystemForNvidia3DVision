#pragma once
#include <qwidget.h>
#include <qlabel.h>
#include <qevent.h>
#include "Device3DCheckWidget.h"
#include "ColorTestWidget.h"
#include "StereoTestWidget.h"
#include "ui_Exp1.h"

class ExperimentBase :
	public QWidget
{
	Q_OBJECT
public:
	ExperimentBase(QWidget *parent = Q_NULLPTR);
	~ExperimentBase();

protected:
	Ui::Experiment1Form ui;

	bool ifPassedPreTests();

protected slots:
	virtual void on_session1();
	virtual void on_session2();
	virtual void on_session3();

protected slots:
	void on_receiveColorBlindResults(int result);
	void on_receive3DDeviceResults(bool result);
	void on_receiveStereoBlindResults(int result);



signals:
	void toResetStatusBar();
	
};
