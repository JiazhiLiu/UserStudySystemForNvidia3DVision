#pragma once
#include <qdialog.h>
#include "ui_ColorTestForm.h"

class ColorTestWidget :
	public QDialog
{
	Q_OBJECT
public:
	ColorTestWidget(QWidget *parent = Q_NULLPTR);
	~ColorTestWidget();

private:
	Ui::ColorTestForm ui;
	int m_answers[15];
	int m_imageIdx;

	void initSignalSlots();
	void displayImage(int number);
	void analyzeResults();

private slots:
	void on_rbtnNothing();
	void on_rbtnNumber();
	void on_pbtnLast();
	void on_pbtnNext();
	void on_lineEditNumber();

signals:
	void reportColorTestResults(int result);
};

