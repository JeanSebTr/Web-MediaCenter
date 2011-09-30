#ifndef APP_H
#define APP_H

#include <QFile>


#include "loginscreen.h"

class App
{
public:
	App();

	void Init();
        QString getJQuery();
private:
        LoginScreen* _loginScreen;
	QString jquery;
};

#endif // APP_H
