#include "TrialsBase.h"

TrialsBase::TrialsBase(bool isNvidia3D, QWidget *parent):
	m_isNvidia3D(isNvidia3D),
	QWidget(parent)
{
	
	initUI();
	showFullScreen();
}

TrialsBase::~TrialsBase()
{
}

void TrialsBase::setSubjectInfo(int number, int age, int male, int color, int stereo, QString filename)
{
	m_basicInfo.number = number;
	m_basicInfo.age = age;
	m_basicInfo.male = male;
	m_basicInfo.color = color;
	m_basicInfo.stereo = stereo;
	m_basicInfo.filename = filename;
}

void TrialsBase::initUI()
{
	plet.setColor(QPalette::Background, Qt::black);
	plet.setColor(QPalette::WindowText, Qt::white);
	setPalette(plet);

	font = QFont("Microsoft YaHei");
	font.setPointSize(12);
	setAutoFillBackground(true);

	Vlay = new QVBoxLayout(this);
	m_widget = new Display3DWidget(m_isNvidia3D, this);
	m_widget->loadImage("./3DDeviceCheck/3DDeviceCheck.png", "./3DDeviceCheck/3DDeviceCheck.png", 1, false);
	Vlay->insertWidget(0, m_widget);

	Hlay2 = new QHBoxLayout(this);
	lbQuestion = new QLabel(this);
	lbQuestion->setMinimumWidth(500);
	lbQuestion->setMaximumHeight(25);
	lbQuestion->setFont(font);
	Hlay2->addWidget(lbQuestion);
	Vlay->addLayout(Hlay2);

	Hlay3 = new QHBoxLayout(this);
	lbScreenRate = new QLabel(this);
	lbScreenRate->setObjectName("lbScreenRate");
	lbScreenRate->setMaximumHeight(25);
	lbScreenRate->setMinimumWidth(220);
	lbScreenRate->setFont(font);
	Hlay3->addWidget(lbScreenRate);
	lbVideoRate = new QLabel(this);
	lbVideoRate->setObjectName("lbVideoRate");
	lbVideoRate->setMaximumHeight(25);
	lbVideoRate->setMinimumWidth(220);
	lbVideoRate->setFont(font);
	Hlay3->addWidget(lbVideoRate);
	Hlay3->addStretch();
	pbtnPreviousQuestion = new QPushButton(this);
	pbtnPreviousQuestion->setText("Previous");
	pbtnPreviousQuestion->setMinimumWidth(100);
	pbtnPreviousQuestion->setMaximumHeight(25);
	pbtnPreviousQuestion->setFont(font);
	Hlay3->addWidget(pbtnPreviousQuestion);
	pbtnNextQuestion = new QPushButton(this);
	pbtnNextQuestion->setText("Next");
	pbtnNextQuestion->setMinimumWidth(100);
	pbtnNextQuestion->setMaximumHeight(25);
	pbtnNextQuestion->setFont(font);
	Hlay3->addWidget(pbtnNextQuestion);
	Vlay->addLayout(Hlay3);

}

void TrialsBase::initSignalSlot()
{
}


void TrialsBase::keyPressEvent(QKeyEvent * keyset)
{
	if (keyset->key() == Qt::Key_Escape)
	{
		showNormal();

	}
	else if (keyset->key() == Qt::Key_F11)
	{
		setWindowFlags(Qt::Window);
		showFullScreen();

	}
	else if (keyset->key() == Qt::Key_S)
	{
		emit nextQuestion();
	}
	else if (keyset->key() == Qt::Key_W)
	{
		emit previousQuestion();
	}
}

void TrialsBase::initQuestionList()
{

}

void TrialsBase::on_pbtnNextQuestion()
{
}

void TrialsBase::on_pbtnPreviousQuestion()
{
}

