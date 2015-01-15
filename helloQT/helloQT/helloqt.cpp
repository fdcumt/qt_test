#include "helloqt.h"
#include <iostream>
helloQT::helloQT(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	std::cout<<"Hello Qt"<<std::endl;
}

helloQT::~helloQT()
{
	std::cout<<"goodbye Qt"<<std::endl;
}


