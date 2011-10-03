#ifndef LOGINSCREEN_H
#define LOGINSCREEN_H

#include <QtWebKit>

class LoginScreen : public QWebView
{
	Q_OBJECT

public:
	LoginScreen(QWidget* parent);

private slots:
	void windowObjCleared();
};

#endif // LOGINSCREEN_H
