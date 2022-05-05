#include "Trials1.h"

Trials1::Trials1(QWidget* parent):
	TrialsBase(parent)
{
	initQuestionList();
	updateUI();
}


Trials1::~Trials1()
{
}

void Trials1::updateUI()
{
	lbQuestion->setText(QString("(") + QString::number(1) + QString("/15) ") + QUESTION_LIST["question_1"]);

	rbtnScore1 = new QRadioButton(this);
	rbtnScore2 = new QRadioButton(this);
	rbtnScore3 = new QRadioButton(this);
	rbtnScore4 = new QRadioButton(this);
	rbtnScore5 = new QRadioButton(this);
	rbtnScore6 = new QRadioButton(this);

	rbtnScore1->setText("1    ");
	rbtnScore2->setText("2    ");
	rbtnScore3->setText("3    ");
	rbtnScore4->setText("4    ");
	rbtnScore5->setText("5    ");
	rbtnScore6->setText("6    ");

	rbtnScore1->setPalette(plet);
	rbtnScore2->setPalette(plet);
	rbtnScore3->setPalette(plet);
	rbtnScore4->setPalette(plet);
	rbtnScore5->setPalette(plet);
	rbtnScore6->setPalette(plet);

	rbtnScore1->setFont(font);
	rbtnScore2->setFont(font);
	rbtnScore3->setFont(font);
	rbtnScore4->setFont(font);
	rbtnScore5->setFont(font);
	rbtnScore6->setFont(font);

	rbtnScore1->setMaximumHeight(20);
	rbtnScore2->setMaximumHeight(20);
	rbtnScore3->setMaximumHeight(20);
	rbtnScore4->setMaximumHeight(20);
	rbtnScore5->setMaximumHeight(20);
	rbtnScore6->setMaximumHeight(20);

	rbtnScore1->setMinimumWidth(120);
	rbtnScore2->setMinimumWidth(120);
	rbtnScore3->setMinimumWidth(120);
	rbtnScore4->setMinimumWidth(120);
	rbtnScore5->setMinimumWidth(120);
	rbtnScore6->setMinimumWidth(120);

	rbtnScore6->setVisible(false);

	Hlay2->addWidget(rbtnScore1);
	Hlay2->addWidget(rbtnScore2);
	Hlay2->addWidget(rbtnScore3);
	Hlay2->addWidget(rbtnScore4);
	Hlay2->addWidget(rbtnScore5);
	Hlay2->addWidget(rbtnScore6);
	Hlay2->addStretch();

}

void Trials1::initQuestionList()
{
#define SCENES 5
#define IMAGES 3

	int list[SCENES][IMAGES] = { 0 };
	for (int i = 0; i < SCENES; ++i) {
		srand(i);
		int b[IMAGES] = { 0 };
		int count = 0;
		while (count < IMAGES) {
			int val = rand() % IMAGES;
			if (b[val] == 0) {
				list[i][count] = val + i * IMAGES;
				count++;
				b[val] = 1;
			}
		}
	}
	for (int j = 0; j < IMAGES; ++j)
		for (int i = 0; i < SCENES; ++i)
			m_questionList[j*SCENES + i] = list[i][j];

}
