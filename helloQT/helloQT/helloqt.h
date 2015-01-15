#ifndef HELLOQT_H
#define HELLOQT_H

#include <QtGui/QMainWindow>
#include "ui_helloqt.h"

class helloQT : public QMainWindow
{
	Q_OBJECT

public:
	helloQT(QWidget *parent = 0, Qt::WFlags flags = 0);
	~helloQT();

private:
	Ui::helloQTClass ui;
};

#endif // HELLOQT_H
