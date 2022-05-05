#pragma once
#include <qwidget.h>
#include <qevent.h>
#include <qpushbutton.h>
#include <qlayout.h>
#include <qmargins.h>
#include <qlabel.h>
#include <qgroupbox.h>
#include <array>


#include "Display3DWidget.h"

class TrialsBase :
	public QWidget
{
	Q_OBJECT
public:
	TrialsBase(bool isNvidia3D = false, QWidget *parent = Q_NULLPTR);
	~TrialsBase();

	void setSubjectInfo(int number, int age, int male, int color, int stereo, QString filename);
protected:
	struct basicInfo {
		int number;
		int age;
		int male;
		int color;
		int stereo;
		QString filename;
	} m_basicInfo;
	bool m_isNvidia3D;

private:
	void initUI();
	void initSignalSlot();
	
private:
	virtual void keyPressEvent(QKeyEvent *keyset);

protected:
	virtual void initQuestionList();
	std::array<int, 40> m_questionList;

signals:
	void nextQuestion();
signals:
	void previousQuestion();
signals:
	void trailsFinished();

protected slots:
	virtual void on_pbtnNextQuestion();
	virtual void on_pbtnPreviousQuestion();

protected:
	Display3DWidget		*m_widget;

	QVBoxLayout			*Vlay;
	QHBoxLayout			*Hlay2;
	QHBoxLayout			*Hlay3;

	QPushButton			*pbtnNextQuestion;
	QPushButton			*pbtnPreviousQuestion;

	QLabel				*lbScreenRate;
	QLabel				*lbVideoRate;
	QLabel				*lbQuestion;

	QPalette			plet;
	QFont				font;


};

