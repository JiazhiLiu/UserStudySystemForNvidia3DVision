#pragma once
#include <qwidget.h>
#include <qradiobutton.h>
#include <map>
#include "TrialsBase.h"
class Trials1 :
	public TrialsBase
{
	Q_OBJECT
public:
	Trials1(QWidget* parent = Q_NULLPTR);
	~Trials1();

private:
	std::map<std::string, QString> QUESTION_LIST = {
		{"question_1", QString("Please score the comfort of the left stimulus.")},
		{"question_2", QString("Please score the depth of the left stimulus.")},
		{"question_3", QString("Please score the 2D quality of the left stimulus.")}
	};
private:
	void updateUI();
	void initQuestionList() override;

	QRadioButton		*rbtnScore1;
	QRadioButton		*rbtnScore2;
	QRadioButton		*rbtnScore3;
	QRadioButton		*rbtnScore4;
	QRadioButton		*rbtnScore5;
	QRadioButton		*rbtnScore6;
};

