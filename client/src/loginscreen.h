#ifndef LOGINSCREEN_H
#define LOGINSCREEN_H

#include <QtWebKit>

class LoginScreen : public QWebView
{
public:
	LoginScreen();

public slots:
	void windowObjCleared();
};

#endif // LOGINSCREEN_H
