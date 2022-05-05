#pragma once
#include <qwidget.h>
#include "ExperimentBase.h"

class Experiment2 :
	public ExperimentBase
{
	Q_OBJECT
public:
	Experiment2(QWidget *parent = Q_NULLPTR);
	~Experiment2();

private:
	void updateUI();

private slots:
	void on_session1() override;
	void on_session2() override;
	void on_session3() override;	
};

