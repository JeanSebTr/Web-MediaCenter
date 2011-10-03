#ifndef APP_H
#define APP_H

#include <QFile>


#include "loginscreen.h"

class App : public QWidget
{
	Q_OBJECT

public:
	enum
	{
		MAIN_PROCESS,
		SUB_PROCESS
	} PROCESS_MODE;

	App(int mode);
protected:
	void resizeEvent(QResizeEvent *event);
private:
	int mode;
	LoginScreen* login;
};

#endif // APP_H
