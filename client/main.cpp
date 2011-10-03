#include <QtGui/QApplication>

#include "src/app.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	App app(App::MAIN_PROCESS);
	app.showMaximized();

	return a.exec();
}
