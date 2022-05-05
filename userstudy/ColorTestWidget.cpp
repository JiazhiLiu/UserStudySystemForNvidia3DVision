#include <qpixmap.h>
#include <qmessagebox.h>
#include "ColorTestWidget.h"

ColorTestWidget::ColorTestWidget(QWidget *parent):
	QDialog(0),
	m_imageIdx(0)
{
	ui.setupUi(this);
	this->setAttribute(Qt::WA_DeleteOnClose);
	this->setWindowTitle(QStringLiteral("Color Blind Test"));
	ui.rbtnThird->setVisible(false);
	initSignalSlots();

	m_imageIdx++;
	displayImage(m_imageIdx);
}

ColorTestWidget::~ColorTestWidget()
{
	analyzeResults();
}

void ColorTestWidget::initSignalSlots()
{
	connect(ui.rbnNothing, SIGNAL(clicked()), this, SLOT(on_rbtnNothing()));
	connect(ui.rbnNumber, SIGNAL(clicked()), this, SLOT(on_rbtnNumber()));
	connect(ui.lineEditNumber, SIGNAL(textEdited(const QString &)), this, SLOT(on_lineEditNumber()));
	connect(ui.pbtnLastQues, SIGNAL(clicked()), this, SLOT(on_pbtnLast()));
	connect(ui.pbtnNextQues, SIGNAL(clicked()), this, SLOT(on_pbtnNext()));
}

void ColorTestWidget::displayImage(int number)
{
	QString filename;
	filename = QString::asprintf("./ColorTest/Plate%d.gif", number);
	QPixmap tmpPixmap;
	tmpPixmap.load(filename);
	ui.labPixture->setPixmap(tmpPixmap);
	ui.labImageNumber->setText(QStringLiteral("The ") + QString::asprintf("%d/15", number) + QStringLiteral(" test image"));
}

void ColorTestWidget::analyzeResults()
{
	int m_stdAnswers[15] = { 12, 8, 29, 5, 3, 15, 74, 6, 45, 5, 7, 16, 73, -1, -1 };
	int correctNumbers = 0;
	for (int i = 0; i < 15; ++i) {
		if (m_answers[i] == m_stdAnswers[i])
			correctNumbers++;
	}
	emit reportColorTestResults(correctNumbers);
}

void ColorTestWidget::on_rbtnNumber()
{
	ui.lineEditNumber->setFocus();
}

void ColorTestWidget::on_rbtnNothing()
{
}

void ColorTestWidget::on_pbtnLast()
{
	m_imageIdx = m_imageIdx > 1 ? m_imageIdx - 1 : 1;
	displayImage(m_imageIdx);
	if (m_answers[m_imageIdx - 1] == -1) {
		ui.rbnNothing->setChecked(true);
	}
	else {
		ui.rbnNumber->setChecked(true);
		ui.lineEditNumber->setText(QString::number(m_answers[m_imageIdx - 1]));
	}
}

void ColorTestWidget::on_pbtnNext()
{
	if (!(ui.rbnNothing->isChecked() || ui.rbnNumber->isChecked()))
		return;
	// process the last question
	int num = (ui.lineEditNumber->text()).toInt();
	if (ui.rbnNumber->isChecked())
		m_answers[m_imageIdx - 1] = num;
	else if (ui.rbnNothing->isChecked())
		m_answers[m_imageIdx - 1] = -1;
	else
		m_answers[m_imageIdx - 1] = -2;

	m_imageIdx++;
	if (m_imageIdx > 15)
		this->close();
	else
	{
		displayImage(m_imageIdx);
		ui.rbtnThird->setChecked(true);
		ui.lineEditNumber->clear();
		if (m_imageIdx == 15)
			ui.pbtnNextQues->setText(QStringLiteral("Exit"));
	}

}

void ColorTestWidget::on_lineEditNumber()
{
	ui.rbnNumber->setChecked(true);
}




