#include "app.h"


App::App()
{

}

void App::Init()
{
    // load jquery min
    QFile file;
    file.setFileName(":/js/jquery.js");
    file.open(QIODevice::ReadOnly);
    this->jquery = file.readAll();
    file.close();

    // show login screen
    this->_loginScreen = new LoginScreen();
    //this->_loginScreen->setWindowFlags(Qt::FramelessWindowHint);
    this->_loginScreen->showMaximized();
    this->_loginScreen->activateWindow();
}

QString App::getJQuery()
{
    return this->jquery;
}
