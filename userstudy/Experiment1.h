#pragma once
#include <qwidget.h>
#include "ExperimentBase.h"

class Experiment1 :
	public ExperimentBase
{
	Q_OBJECT
public:
	Experiment1(QWidget *parent = Q_NULLPTR);
	~Experiment1();

private:
	void updateUI();

private slots:
	void on_session1() override;
	void on_session2() override;
	void on_session3() override;


};

