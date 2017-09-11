/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionadd;
    QAction *actionopen;
    QAction *actionExit;
    QAction *actionPrint;
    QAction *actionSave;
    QAction *action_to_Exit;
    QWidget *centralWidget;
    QPushButton *pushButton_resonance;
    QPushButton *pushButton_tomo;
    QPushButton *pushButton_ultrasound;
    QLabel *label_background;
    QPushButton *pushButton_exit;
    QMenuBar *menuBar;
    QMenu *menuOpen;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1680, 1050);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(80, 80, 80, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(153, 153, 153, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(127, 127, 127, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(51, 51, 51, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(68, 68, 68, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush6(QColor(0, 0, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        QBrush brush7(QColor(102, 102, 102, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        MainWindow->setPalette(palette);
        MainWindow->setCursor(QCursor(Qt::ArrowCursor));
        MainWindow->setWindowOpacity(0.9);
        actionadd = new QAction(MainWindow);
        actionadd->setObjectName(QStringLiteral("actionadd"));
        actionopen = new QAction(MainWindow);
        actionopen->setObjectName(QStringLiteral("actionopen"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionPrint = new QAction(MainWindow);
        actionPrint->setObjectName(QStringLiteral("actionPrint"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        action_to_Exit = new QAction(MainWindow);
        action_to_Exit->setObjectName(QStringLiteral("action_to_Exit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton_resonance = new QPushButton(centralWidget);
        pushButton_resonance->setObjectName(QStringLiteral("pushButton_resonance"));
        pushButton_resonance->setGeometry(QRect(210, 720, 256, 256));
        pushButton_resonance->setStyleSheet(QLatin1String("#upleft{\n"
"background-color:transparent;\n"
"border-image:url(:/png/sum.png);\n"
"background:none;\n"
"border:none;\n"
"background-repeat:none;\n"
"}\n"
"#upLeft:pressed\n"
"{\n"
"border-image:url(:/png/sum.png);\n"
"}"));
        pushButton_resonance->setIconSize(QSize(128, 128));
        pushButton_tomo = new QPushButton(centralWidget);
        pushButton_tomo->setObjectName(QStringLiteral("pushButton_tomo"));
        pushButton_tomo->setGeometry(QRect(690, 720, 256, 256));
        pushButton_tomo->setIconSize(QSize(128, 128));
        pushButton_ultrasound = new QPushButton(centralWidget);
        pushButton_ultrasound->setObjectName(QStringLiteral("pushButton_ultrasound"));
        pushButton_ultrasound->setGeometry(QRect(1170, 720, 256, 256));
        pushButton_ultrasound->setText(QStringLiteral(""));
        pushButton_ultrasound->setIconSize(QSize(128, 128));
        label_background = new QLabel(centralWidget);
        label_background->setObjectName(QStringLiteral("label_background"));
        label_background->setEnabled(true);
        label_background->setGeometry(QRect(0, -40, 1680, 1050));
        label_background->setScaledContents(true);
        label_background->setAlignment(Qt::AlignCenter);
        label_background->setWordWrap(true);
        pushButton_exit = new QPushButton(centralWidget);
        pushButton_exit->setObjectName(QStringLiteral("pushButton_exit"));
        pushButton_exit->setGeometry(QRect(1480, 870, 96, 96));
        MainWindow->setCentralWidget(centralWidget);
        label_background->raise();
        pushButton_tomo->raise();
        pushButton_ultrasound->raise();
        pushButton_resonance->raise();
        pushButton_exit->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1680, 22));
        menuOpen = new QMenu(menuBar);
        menuOpen->setObjectName(QStringLiteral("menuOpen"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuOpen->menuAction());
        menuOpen->addAction(actionadd);
        menuOpen->addSeparator();
        menuOpen->addAction(actionopen);
        menuOpen->addSeparator();
        menuOpen->addAction(actionPrint);
        menuOpen->addSeparator();
        menuOpen->addAction(actionSave);
        menuOpen->addSeparator();
        menuOpen->addAction(actionExit);
        menuOpen->addSeparator();
        menuOpen->addAction(action_to_Exit);

        retranslateUi(MainWindow);
        QObject::connect(action_to_Exit, SIGNAL(triggered()), MainWindow, SLOT(close()));
        QObject::connect(actionExit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Dicom", Q_NULLPTR));
        actionadd->setText(QApplication::translate("MainWindow", "Add", Q_NULLPTR));
        actionopen->setText(QApplication::translate("MainWindow", "Open", Q_NULLPTR));
        actionExit->setText(QApplication::translate("MainWindow", "Exit...", Q_NULLPTR));
        actionPrint->setText(QApplication::translate("MainWindow", "Print", Q_NULLPTR));
        actionSave->setText(QApplication::translate("MainWindow", "Save", Q_NULLPTR));
        action_to_Exit->setText(QApplication::translate("MainWindow", "to Exit", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        action_to_Exit->setToolTip(QApplication::translate("MainWindow", "_to_Exit", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton_resonance->setText(QString());
        pushButton_tomo->setText(QString());
        label_background->setText(QString());
        pushButton_exit->setText(QString());
        menuOpen->setTitle(QApplication::translate("MainWindow", "Dicom", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
