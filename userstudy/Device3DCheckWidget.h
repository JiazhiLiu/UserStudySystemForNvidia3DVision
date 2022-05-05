#pragma once
#include <qdialog.h>
#include "ui_3DDeviceCheck.h"
#include "Display3DWidget.h"

class Device3DCheckWidget :
	public QDialog
{
	Q_OBJECT
public:
	Device3DCheckWidget(bool isNvidia3D = false, QWidget *parent = Q_NULLPTR);
	~Device3DCheckWidget();

private:
	Ui::Device3DCheckForm ui;
	Display3DWidget *m_widget;

	int leftEyeSeen;
	int rightEyeSeen;
	bool m_isNvidia3D;

private slots:
	void on_leftEyeSeen();
	void on_rightEyeSeen();

private:
	void initSignalSlots();
	void analyzeResults();

signals:
	void reportResults(bool isWell);
};

