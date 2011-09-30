#include <QtGui/QApplication>

#include "src/app.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

        App app;
        app.Init();

	return a.exec();
}
