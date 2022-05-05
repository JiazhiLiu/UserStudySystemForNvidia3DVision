#include <QtWidgets/QApplication>
#include "Display3DWidget.h"
#include "ColorTestWidget.h"
#include "Device3DCheckWidget.h"
#include "StereoTestWidget.h"
#include "UserStudyMainWindow.h"
#include "TrialsBase.h"
#include "Trials1.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //Display3DWidget w(false);
	//Device3DCheckWidget w;
	//StereoTestWidget w;
	//ColorTestWidget w;
	//QtWidgets_test w;
	UserStudyMainWindow w;
	//TrialsBase w;
	//Trials1 w;
    w.show();
    return a.exec();
}
