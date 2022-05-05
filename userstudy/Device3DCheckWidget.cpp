#include <qlayout.h>
#include "Device3DCheckWidget.h"

Device3DCheckWidget::Device3DCheckWidget(bool isNvidia3D, QWidget *parent) :
	QDialog(parent),
	leftEyeSeen(0),
	rightEyeSeen(0),
	m_isNvidia3D(isNvidia3D)
{
	ui.setupUi(this);
	this->setAttribute(Qt::WA_DeleteOnClose);
	this->setWindowTitle(QStringLiteral("3D Device Check"));
	initSignalSlots();
	if (leftEyeSeen == 0 || rightEyeSeen == 0)
		ui.pbtnOK->setEnabled(false);

	QVBoxLayout *vlay = new QVBoxLayout(ui.TestImage);
	m_widget = new Display3DWidget(m_isNvidia3D, ui.TestImage);
	m_widget->loadImage("./3DDeviceCheck/3DDeviceCheck.png", "./3DDeviceCheck/3DDeviceCheck.png", 1, false);
	ui.TestImage->setWindowFlags(Qt::FramelessWindowHint);
	QMargins margin(0, 0, 0, 0);
	vlay->setContentsMargins(margin);
	vlay->addWidget(m_widget);
}

Device3DCheckWidget::~Device3DCheckWidget()
{
	analyzeResults();
}

void Device3DCheckWidget::on_leftEyeSeen()
{
	if (ui.LSeen1->isChecked())
		leftEyeSeen = 1;
	else if (ui.LSeen2->isChecked())
		leftEyeSeen = 2;
	else if (ui.LSeen3->isChecked())
		leftEyeSeen = 3;

	if (leftEyeSeen && rightEyeSeen)
		ui.pbtnOK->setEnabled(true);
}

void Device3DCheckWidget::on_rightEyeSeen()
{
	if (ui.RSeen1->isChecked())
		rightEyeSeen = 1;
	else if (ui.RSeen2->isChecked())
		rightEyeSeen = 2;
	else if (ui.RSeen3->isChecked())
		rightEyeSeen = 3;

	if (leftEyeSeen && rightEyeSeen)
		ui.pbtnOK->setEnabled(true);
}

void Device3DCheckWidget::initSignalSlots()
{
	connect(ui.LSeen1, SIGNAL(clicked()), this, SLOT(on_leftEyeSeen()));
	connect(ui.LSeen2, SIGNAL(clicked()), this, SLOT(on_leftEyeSeen()));
	connect(ui.LSeen3, SIGNAL(clicked()), this, SLOT(on_leftEyeSeen()));

	connect(ui.RSeen1, SIGNAL(clicked()), this, SLOT(on_rightEyeSeen()));
	connect(ui.RSeen2, SIGNAL(clicked()), this, SLOT(on_rightEyeSeen()));
	connect(ui.RSeen3, SIGNAL(clicked()), this, SLOT(on_rightEyeSeen()));

	connect(ui.pbtnOK, SIGNAL(clicked()), this, SLOT(close()));
}

void Device3DCheckWidget::analyzeResults()
{
	if (leftEyeSeen == 1 && rightEyeSeen == 2)
		emit reportResults(true);
	else
		emit reportResults(false);
}

