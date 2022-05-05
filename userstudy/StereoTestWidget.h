#pragma once
#include <array>
#include <qdialog.h>
#include "Display3DWidget.h"
#include "ui_StereoTest.h"


class StereoTestWidget :
	public QDialog
{
	Q_OBJECT
public:
	StereoTestWidget(bool isNvidia3D = false, QWidget *parent = Q_NULLPTR);
	~StereoTestWidget();

private:
	Ui::StereoTestForm ui;
	int m_answers[9];
	int m_questionOrder[9];				// also the standard answers
	int m_imageIdx;
	Display3DWidget *m_widget;
	bool m_isNvidia3D;

	void displayImage(int number);
	void initSignalSlots();
	void analyzeResults();

private slots:
	void on_pbtnLastQuestion();
	void on_pbtnNextQuestion();
	void on_rbtnNumber();
	void on_lineEditNumber();

signals:
	void reportResults(int result);
};

