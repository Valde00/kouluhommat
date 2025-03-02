/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *switch1;
    QPushButton *switch2;
    QProgressBar *progressP1;
    QProgressBar *progressP2;
    QPushButton *timeButton1;
    QPushButton *timeButton2;
    QPushButton *startButton;
    QPushButton *stopButton;
    QLabel *gameLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        switch1 = new QPushButton(centralwidget);
        switch1->setObjectName("switch1");
        switch1->setGeometry(QRect(110, 100, 80, 18));
        switch2 = new QPushButton(centralwidget);
        switch2->setObjectName("switch2");
        switch2->setGeometry(QRect(340, 100, 80, 18));
        progressP1 = new QProgressBar(centralwidget);
        progressP1->setObjectName("progressP1");
        progressP1->setGeometry(QRect(90, 70, 118, 23));
        progressP1->setValue(24);
        progressP2 = new QProgressBar(centralwidget);
        progressP2->setObjectName("progressP2");
        progressP2->setGeometry(QRect(320, 70, 118, 23));
        progressP2->setValue(24);
        timeButton1 = new QPushButton(centralwidget);
        timeButton1->setObjectName("timeButton1");
        timeButton1->setGeometry(QRect(170, 140, 80, 18));
        timeButton2 = new QPushButton(centralwidget);
        timeButton2->setObjectName("timeButton2");
        timeButton2->setGeometry(QRect(280, 140, 80, 18));
        startButton = new QPushButton(centralwidget);
        startButton->setObjectName("startButton");
        startButton->setGeometry(QRect(130, 190, 80, 18));
        stopButton = new QPushButton(centralwidget);
        stopButton->setObjectName("stopButton");
        stopButton->setGeometry(QRect(320, 190, 80, 18));
        gameLabel = new QLabel(centralwidget);
        gameLabel->setObjectName("gameLabel");
        gameLabel->setGeometry(QRect(210, 30, 111, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        switch1->setText(QCoreApplication::translate("MainWindow", "Switch player", nullptr));
        switch2->setText(QCoreApplication::translate("MainWindow", "Switch player", nullptr));
        timeButton1->setText(QCoreApplication::translate("MainWindow", "120 sec", nullptr));
        timeButton2->setText(QCoreApplication::translate("MainWindow", "5 min", nullptr));
        startButton->setText(QCoreApplication::translate("MainWindow", "START GAME", nullptr));
        stopButton->setText(QCoreApplication::translate("MainWindow", "STOP GAME", nullptr));
        gameLabel->setText(QCoreApplication::translate("MainWindow", "Set playtime", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
