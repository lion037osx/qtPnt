﻿#include "mainwindow.h"
//#include <QApplication>
#include <QDesktopWidget>
#include <QSplashScreen>
#include <QTimer>
#include <QLabel>
#include <QStatusBar>
#include <QDebug>
#include <QIcon>

int main(int argc, char *argv[])
{
QApplication a(argc, argv);

//rm -R ../build-qt_icons_splash*


QSplashScreen *splash=new QSplashScreen;

#ifdef Q_OS_LINUX
qDebug()<<"LINUX OS";
splash->setPixmap(QPixmap(_LINK_USER + "/qtPnt/png/animal.png"));
#else
qDebug()<<"MAC OS";
//splash->setPixmap(QPixmap(_LINK_USER + "/qtPnt/png/log_sm_pnt_aple1080x720.png"));
splash->setPixmap(QPixmap(_LINK_USER + "/qtPnt/png/transp.png"));
#endif

splash->setWindowOpacity(0.95);
splash->show();
QTimer::singleShot(3000,splash,SLOT(close()));

MainWindow w;

QIcon icon(_LINK_USER + "/qtPnt/png/logoPnt.png");

w.setWindowIcon(icon);
w.move(QApplication::desktop()->screen()->rect().center() - w.rect().center());

//QTimer::singleShot(1500,&w,SLOT(show()));
QTimer::singleShot(3000,&w,SLOT(showFullScreen()));
return a.exec();
}
