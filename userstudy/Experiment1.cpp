#include "Experiment1.h"
#include <vector>

Experiment1::Experiment1(QWidget *parent)
	:ExperimentBase(parent)
{

	updateUI();
}

Experiment1::~Experiment1()
{
}

void Experiment1::updateUI()
{
	ui.pbtn1->setVisible(false);
	ui.pbtn2->setText("3D");
	ui.pbtn3->setText("2D");
}

void Experiment1::on_session1()
{
	ifPassedPreTests();
}


void Experiment1::on_session2()
{

}

void Experiment1::on_session3()
{
}

