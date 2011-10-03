#include "app.h"


App::App(int mode)
{
	if(mode == App::MAIN_PROCESS)
	{
		this->login = new LoginScreen(this);
	}
	else
	{

	}
}

void App::resizeEvent(QResizeEvent *event)
{
	if(mode == App::MAIN_PROCESS)
	{
		this->login->setGeometry(0, 0, event->size().width(), event->size().height());
	}
}
