#include "loginscreen.h"

LoginScreen::LoginScreen() : QWebView()
{
        connect(this->page()->mainFrame(), SIGNAL(javaScriptWindowObjectCleared()),
                this, SLOT(windowObjCleared()));
        this->setUrl(QUrl("qrc:/html/login.html"));
}

void LoginScreen::windowObjCleared()
{

}
