#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <fstream>
#include <QFile>
#include <qdebug.h>
#include <QPalette>
#include <QColor>
#include <QIcon>
#include <QSize>
#include <QProcess>
#include <QPushButton>
#include <QPixmap>
#include <QLabel>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    set_icons();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void  MainWindow::set_icons(){

QString link;
#ifdef Q_OS_LINUX
    link =qApp->applicationDirPath() + "/../qtPnt/pnng/bg_cool.png";
#else
    link =qApp->applicationDirPath() + "/../../../../qtPnt/png/wallPaper_logo_sky.jpg";

    //link =qApp->applicationDirPath() + "/../../../../qtPnt/png/transp.png";
#endif


 qDebug() <<"link: "<< link;
    QPixmap pixmap(link );

        ui->label_background->setAlignment(Qt::AlignCenter);
        ui->label_background->setAutoFillBackground(1);
    ui->label_background->setPixmap(pixmap);


    QIcon icon;
    QSize size(48,48);

     ui->pushButton_exit->setFlat(true);
     ui->pushButton_resonance->setFlat(true);
     ui->pushButton_tomo->setFlat(true);
     ui->pushButton_ultrasound->setFlat(true);

    ui->pushButton_exit->setStyleSheet("* { background-color: rgba(0,0,0,10) }");
    ui->pushButton_resonance->setStyleSheet("* { background-color: rgba(0,0,0,10) }");
    ui->pushButton_tomo->setStyleSheet("* { background-color: rgba(0,0,0,10) }");
    ui->pushButton_ultrasound->setStyleSheet("* { background-color: rgba(0,0,0,10) }");

    ui->pushButton_exit->setIconSize(size);
    size=QSize(256,256);
    ui->pushButton_resonance->setIconSize(size);
    ui->pushButton_tomo->setIconSize(size);
    ui->pushButton_ultrasound->setIconSize(size);

    QString linkIcon;


#ifdef Q_OS_LINUX
      linkIcon =qApp->applicationDirPath() + "/..";
      icon=QIcon(linkIcon + "/qtPnt/png/exit.png");
      ui->pushButton_exit->setIcon(icon);
      icon=QIcon(linkIcon + "/qtPnt/png/logPnt512x512.png");
      ui->pushButton_resonance->setIcon(icon);
      icon=QIcon(linkIcon + "/qtPnt/png/logPnt512x512.png");
      //ui->pushButton_tomo->setText("Tomography");
      ui->pushButton_tomo->setIcon(icon);
      icon=QIcon(linkIcon + "/qtPnt/png/logPnt512x512.png");
      //ui->pushButton_ultrasound->setText("Ultrasound");
      ui->pushButton_ultrasound->setIcon(icon);

#else
    linkIcon =qApp->applicationDirPath() + "/../../../..";
    icon=QIcon(linkIcon + "/qtPnt/png/exit.png");
    ui->pushButton_exit->setIcon(icon);
    icon=QIcon(linkIcon + "/qtPnt/png/logPnt512x512.png");
    ui->pushButton_resonance->setIcon(icon);
    icon=QIcon(linkIcon + "/qtPnt/png/logPnt512x512.png");
    //ui->pushButton_tomo->setText("Tomography");
    ui->pushButton_tomo->setIcon(icon);
    icon=QIcon(linkIcon + "/qtPnt/png/logPnt512x512.png");
    //ui->pushButton_ultrasound->setText("Ultrasound");
    ui->pushButton_ultrasound->setIcon(icon);
#endif
/*
    QPushButton* button_siri= new QPushButton(this);

    size=QSize(96,96);
    icon=QIcon(_LINK_USER + "/qtPnt/png/logPnt512x512.png");

    button_siri->setFixedSize(120,96);
    button_siri->move(20,(640-24-96));
    button_siri->setIconSize(size);
    button_siri->setFlat(true);
    button_siri->setStyleSheet("* { background-color: rgba(0,0,0,10) }");
    button_siri->setIcon(icon);
    button_siri->show();
    */

}

void MainWindow::on_pushButton_clicked()
{
 //   this->close();
}


void MainWindow::on_pushButton_2_clicked()
{
    /*
    QProcess *process = new QProcess();

#ifdef Q_OS_LINUX
    process->start( "/bin/rm " + _LINK_USER + "/copia.png");
#else
process->start( "/bin/rm " + qApp->applicationDirPath() + "copia.png");
#endif

    process->waitForFinished();
    qDebug()<<"Dicom";
    */
}

void MainWindow::on_pushButton_exit_clicked()
{
this->close();
}
