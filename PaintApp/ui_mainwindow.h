/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *scribblePlaceHolder;
    QLabel *borderLabel;
    QPushButton *smallBrushButton;
    QPushButton *mediumBrushButton;
    QPushButton *largeBrushButton;
    QPushButton *redBrushButton;
    QPushButton *blueBrushButton;
    QPushButton *greenBrushButton;
    QPushButton *blackBrushButton;
    QPushButton *brushPushButton;
    QPushButton *eraserPushButton;
    QPushButton *yellowBrushButton;
    QPushButton *purpleBrushButton;
    QPushButton *emote1Button;
    QPushButton *emote2Button;
    QPushButton *emote4Button;
    QPushButton *emote5Button;
    QPushButton *emote3Button;
    QPushButton *emote6Button;
    QPushButton *clearPushButton;
    QLabel *rightClickLabel;
    QLabel *leftClickLabel;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1001, 859);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 771, 801));
        scribblePlaceHolder = new QVBoxLayout(verticalLayoutWidget);
        scribblePlaceHolder->setSpacing(6);
        scribblePlaceHolder->setContentsMargins(11, 11, 11, 11);
        scribblePlaceHolder->setObjectName(QString::fromUtf8("scribblePlaceHolder"));
        scribblePlaceHolder->setContentsMargins(0, 0, 0, 0);
        borderLabel = new QLabel(centralWidget);
        borderLabel->setObjectName(QString::fromUtf8("borderLabel"));
        borderLabel->setGeometry(QRect(770, 0, 231, 801));
        borderLabel->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(65, 73, 112);\n"
"background-color:rgb(141, 141, 141)"));
        smallBrushButton = new QPushButton(centralWidget);
        smallBrushButton->setObjectName(QString::fromUtf8("smallBrushButton"));
        smallBrushButton->setGeometry(QRect(780, 390, 71, 71));
        smallBrushButton->setStyleSheet(QString::fromUtf8("background-image: url(://images/smallBrush.png);"));
        mediumBrushButton = new QPushButton(centralWidget);
        mediumBrushButton->setObjectName(QString::fromUtf8("mediumBrushButton"));
        mediumBrushButton->setGeometry(QRect(850, 390, 71, 71));
        mediumBrushButton->setStyleSheet(QString::fromUtf8("background-image: url(://images/mediumBrush.png);"));
        largeBrushButton = new QPushButton(centralWidget);
        largeBrushButton->setObjectName(QString::fromUtf8("largeBrushButton"));
        largeBrushButton->setGeometry(QRect(920, 390, 71, 71));
        largeBrushButton->setStyleSheet(QString::fromUtf8("background-image: url(://images/largeBrush.png);"));
        redBrushButton = new QPushButton(centralWidget);
        redBrushButton->setObjectName(QString::fromUtf8("redBrushButton"));
        redBrushButton->setGeometry(QRect(780, 310, 71, 71));
        redBrushButton->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"border-style: solid;\n"
"border-width:0px;\n"
"border-radius:50px;\n"
"background-color:rgb(255, 0, 0);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:rgb(255, 188, 189)\n"
"}"));
        blueBrushButton = new QPushButton(centralWidget);
        blueBrushButton->setObjectName(QString::fromUtf8("blueBrushButton"));
        blueBrushButton->setGeometry(QRect(850, 240, 71, 71));
        blueBrushButton->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"border-style: solid;\n"
"border-width:0px;\n"
"border-radius:50px;\n"
"background-color:rgb(0, 0, 255)\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(150, 146, 255)\n"
"}"));
        greenBrushButton = new QPushButton(centralWidget);
        greenBrushButton->setObjectName(QString::fromUtf8("greenBrushButton"));
        greenBrushButton->setGeometry(QRect(850, 310, 71, 71));
        greenBrushButton->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"border-style: solid;\n"
"border-width:0px;\n"
"border-radius:50px;\n"
"background-color:rgb(4, 255, 0);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(173, 255, 148)\n"
"}"));
        blackBrushButton = new QPushButton(centralWidget);
        blackBrushButton->setObjectName(QString::fromUtf8("blackBrushButton"));
        blackBrushButton->setGeometry(QRect(780, 240, 71, 71));
        blackBrushButton->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"border-style: solid;\n"
"border-width:0px;\n"
"border-radius:50px;\n"
"background-color:rgb(0, 0, 0);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(130, 130, 130)\n"
"}"));
        brushPushButton = new QPushButton(centralWidget);
        brushPushButton->setObjectName(QString::fromUtf8("brushPushButton"));
        brushPushButton->setGeometry(QRect(780, 580, 211, 101));
        brushPushButton->setStyleSheet(QString::fromUtf8("background-image: url(://images/pen.png);"));
        eraserPushButton = new QPushButton(centralWidget);
        eraserPushButton->setObjectName(QString::fromUtf8("eraserPushButton"));
        eraserPushButton->setGeometry(QRect(780, 470, 211, 101));
        eraserPushButton->setStyleSheet(QString::fromUtf8("background-image: url(://images/eraser.png);"));
        yellowBrushButton = new QPushButton(centralWidget);
        yellowBrushButton->setObjectName(QString::fromUtf8("yellowBrushButton"));
        yellowBrushButton->setGeometry(QRect(920, 240, 71, 71));
        yellowBrushButton->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"border-style: solid;\n"
"border-width:0px;\n"
"border-radius:50px;\n"
"background-color:rgb(255, 255, 0)\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(255, 255, 157)\n"
"}"));
        purpleBrushButton = new QPushButton(centralWidget);
        purpleBrushButton->setObjectName(QString::fromUtf8("purpleBrushButton"));
        purpleBrushButton->setGeometry(QRect(920, 310, 71, 71));
        purpleBrushButton->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"border-style: solid;\n"
"border-width:0px;\n"
"border-radius:50px;\n"
"background-color:rgb(255, 0, 255)\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(255, 174, 255)\n"
"}"));
        emote1Button = new QPushButton(centralWidget);
        emote1Button->setObjectName(QString::fromUtf8("emote1Button"));
        emote1Button->setGeometry(QRect(780, 50, 71, 71));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        emote1Button->setFont(font);
        emote1Button->setStyleSheet(QString::fromUtf8(""));
        emote2Button = new QPushButton(centralWidget);
        emote2Button->setObjectName(QString::fromUtf8("emote2Button"));
        emote2Button->setGeometry(QRect(850, 50, 71, 71));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Papyrus"));
        font1.setPointSize(11);
        emote2Button->setFont(font1);
        emote2Button->setStyleSheet(QString::fromUtf8(""));
        emote4Button = new QPushButton(centralWidget);
        emote4Button->setObjectName(QString::fromUtf8("emote4Button"));
        emote4Button->setGeometry(QRect(780, 120, 71, 71));
        emote4Button->setStyleSheet(QString::fromUtf8(""));
        emote5Button = new QPushButton(centralWidget);
        emote5Button->setObjectName(QString::fromUtf8("emote5Button"));
        emote5Button->setGeometry(QRect(850, 120, 71, 71));
        emote5Button->setStyleSheet(QString::fromUtf8(""));
        emote3Button = new QPushButton(centralWidget);
        emote3Button->setObjectName(QString::fromUtf8("emote3Button"));
        emote3Button->setGeometry(QRect(920, 50, 71, 71));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Forte"));
        font2.setPointSize(18);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        emote3Button->setFont(font2);
        emote3Button->setStyleSheet(QString::fromUtf8(""));
        emote6Button = new QPushButton(centralWidget);
        emote6Button->setObjectName(QString::fromUtf8("emote6Button"));
        emote6Button->setGeometry(QRect(920, 120, 71, 71));
        emote6Button->setStyleSheet(QString::fromUtf8(""));
        clearPushButton = new QPushButton(centralWidget);
        clearPushButton->setObjectName(QString::fromUtf8("clearPushButton"));
        clearPushButton->setGeometry(QRect(780, 690, 211, 101));
        QFont font3;
        font3.setPointSize(22);
        font3.setBold(true);
        font3.setWeight(75);
        clearPushButton->setFont(font3);
        rightClickLabel = new QLabel(centralWidget);
        rightClickLabel->setObjectName(QString::fromUtf8("rightClickLabel"));
        rightClickLabel->setGeometry(QRect(780, 10, 31, 31));
        rightClickLabel->setStyleSheet(QString::fromUtf8("background-image: url(://images/rightClick.png);"));
        leftClickLabel = new QLabel(centralWidget);
        leftClickLabel->setObjectName(QString::fromUtf8("leftClickLabel"));
        leftClickLabel->setGeometry(QRect(780, 200, 31, 31));
        leftClickLabel->setStyleSheet(QString::fromUtf8("background-image: url(://images/leftClick.png);"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1001, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        borderLabel->setText(QString());
        smallBrushButton->setText(QString());
        mediumBrushButton->setText(QString());
        largeBrushButton->setText(QString());
        redBrushButton->setText(QString());
        blueBrushButton->setText(QString());
        greenBrushButton->setText(QString());
        blackBrushButton->setText(QString());
        brushPushButton->setText(QString());
        eraserPushButton->setText(QString());
        yellowBrushButton->setText(QString());
        purpleBrushButton->setText(QString());
        emote1Button->setText(QApplication::translate("MainWindow", "Hello", nullptr));
        emote2Button->setText(QApplication::translate("MainWindow", "I love you!", nullptr));
        emote4Button->setText(QApplication::translate("MainWindow", "(\357\276\211\342\227\225\343\203\256\342\227\225)\357\276\211*:\357\275\245\357\276\237\342\234\247", nullptr));
        emote5Button->setText(QApplication::translate("MainWindow", "(\342\201\204 \342\201\204\342\200\242\342\201\204\317\211\342\201\204\342\200\242\342\201\204 \342\201\204)", nullptr));
        emote3Button->setText(QApplication::translate("MainWindow", "YAY!", nullptr));
        emote6Button->setText(QApplication::translate("MainWindow", "	(\343\200\215\302\260\343\203\255\302\260)\343\200\215", nullptr));
        clearPushButton->setText(QApplication::translate("MainWindow", "CLEAR", nullptr));
        rightClickLabel->setText(QString());
        leftClickLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
