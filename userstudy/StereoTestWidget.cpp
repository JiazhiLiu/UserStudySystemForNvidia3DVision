#include "StereoTestWidget.h"

StereoTestWidget::StereoTestWidget(bool isNvidia3D, QWidget *parent):
	QDialog(parent),
	m_imageIdx(0),
	m_isNvidia3D(isNvidia3D),
	m_questionOrder{ 9, 6, 3, 8, 7, 5, 4, 2, 1 },
	m_answers{ 0,0,0,0,0,0,0,0,0 }
{
	ui.setupUi(this);
	this->setAttribute(Qt::WA_DeleteOnClose);
	this->setWindowTitle(QStringLiteral("Stereo Blind Test"));

	initSignalSlots();

	QVBoxLayout *vlay = new QVBoxLayout(ui.StereoImageWidget);
	m_widget = new Display3DWidget(m_isNvidia3D, ui.StereoImageWidget);
	ui.StereoImageWidget->setWindowFlags(Qt::FramelessWindowHint);
	QMargins margin(0, 0, 0, 0);
	vlay->setContentsMargins(margin);
	vlay->addWidget(m_widget);
	ui.radioButton_3->setVisible(false);

	m_imageIdx++;
	displayImage(m_imageIdx);
}

StereoTestWidget::~StereoTestWidget()
{
	analyzeResults();
}

void StereoTestWidget::displayImage(int number)
{
	int currentIdx = m_questionOrder[number-1];
	std::string frame = "./stereoTest/" + std::to_string(currentIdx) + ".png";
	m_widget->loadImage(frame, frame, 1, false);
	ui.label_3->setText(QStringLiteral("Test Image: ") + QString::asprintf("%d/9", number));
}

void StereoTestWidget::initSignalSlots()
{
	connect(ui.noNumber, SIGNAL(clicked()), this, SLOT(on_rbtnNumber()));
	connect(ui.Number, SIGNAL(clicked()), this, SLOT(on_rbtnNumber()));
	connect(ui.NextImage, SIGNAL(clicked()), this, SLOT(on_pbtnNextQuestion()));
	connect(ui.LastImage, SIGNAL(clicked()), this, SLOT(on_pbtnLastQuestion()));
	connect(ui.lineEditNumber, SIGNAL(textEdited(const QString &)), this, SLOT(on_lineEditNumber()));
}

void StereoTestWidget::analyzeResults()
{
	int correctNumbers = 0;
	for (int i = 0; i < 9; ++i) {
		if (m_answers[i] == m_questionOrder[i])
			correctNumbers++;
	}
	emit reportResults(correctNumbers);
}

void StereoTestWidget::on_pbtnLastQuestion()
{
	m_imageIdx = m_imageIdx > 1 ? m_imageIdx - 1 : 1;
	displayImage(m_imageIdx);
	if (m_answers[m_imageIdx-1] == 0)
		ui.noNumber->setChecked(true);
	else {
		ui.Number->setChecked(true);
		ui.lineEditNumber->setText(QString::number(m_answers[m_imageIdx-1]));
	}
}

void StereoTestWidget::on_pbtnNextQuestion()
{
	if (!(ui.noNumber->isChecked() || ui.Number->isChecked()))
		return;
	QString str = ui.lineEditNumber->text();
	int num = str.toInt();
	if (ui.Number->isChecked())
		m_answers[m_imageIdx-1] = num;
	else
		m_answers[m_imageIdx=1] = 0;

	m_imageIdx++;
	if (m_imageIdx > 9)
		this->close();
	else {
		displayImage(m_imageIdx);
		ui.radioButton_3->setChecked(true);
		ui.lineEditNumber->clear();
		if (m_imageIdx == 9)
			ui.NextImage->setText(QStringLiteral("Exit"));
	}

}

void StereoTestWidget::on_rbtnNumber()
{
	ui.lineEditNumber->setFocus();
}

void StereoTestWidget::on_lineEditNumber()
{
	ui.Number->setChecked(true);
}


