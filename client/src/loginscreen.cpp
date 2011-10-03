#include "loginscreen.h"

LoginScreen::LoginScreen(QWidget* parent) : QWebView(parent)
{
		connect(this->page()->mainFrame(), SIGNAL(javaScriptWindowObjectCleared()),
				SLOT(windowObjCleared()));
		this->setUrl(QUrl("qrc:/html/login.html"));
}

void LoginScreen::windowObjCleared()
{

}
