#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    scribbleArea(new ScribbleArea)
{
    ui->setupUi(this);
    ui->scribblePlaceHolder->addWidget(scribbleArea);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_smallBrushButton_clicked()
{
    scribbleArea->setMyPenWidth(2);
}

void MainWindow::on_mediumBrushButton_clicked()
{
    scribbleArea->setMyPenWidth(10);
}

void MainWindow::on_largeBrushButton_clicked()
{
    scribbleArea->setMyPenWidth(20);
}

void MainWindow::on_blackBrushButton_clicked()
{
    if(scribbleArea->getIsEraser() == false){
        scribbleArea->setMyPenColor(Qt::black);
        scribbleArea->setMyTextColor(Qt::black);
    }
}

void MainWindow::on_redBrushButton_clicked()
{
    if(scribbleArea->getIsEraser() == false){
        scribbleArea->setMyPenColor(Qt::red);
        scribbleArea->setMyTextColor(Qt::red);
    }
}

void MainWindow::on_blueBrushButton_clicked()
{
    if(scribbleArea->getIsEraser() == false){
        scribbleArea->setMyPenColor(Qt::blue);
        scribbleArea->setMyTextColor(Qt::blue);
    }
}

void MainWindow::on_greenBrushButton_clicked()
{
    if(scribbleArea->getIsEraser() == false){
        scribbleArea->setMyPenColor(Qt::green);
        scribbleArea->setMyTextColor(Qt::green);
    }
}

void MainWindow::on_yellowBrushButton_clicked()
{
    if(scribbleArea->getIsEraser() == false){
        scribbleArea->setMyPenColor(Qt::yellow);
        scribbleArea->setMyTextColor(Qt::yellow);
    }
}

void MainWindow::on_purpleBrushButton_clicked()
{
    if(scribbleArea->getIsEraser() == false){
        scribbleArea->setMyPenColor(Qt::magenta);
        scribbleArea->setMyTextColor(Qt::magenta);
    }
}

void MainWindow::on_emote1Button_clicked()
{
    scribbleArea->setMyFont(QFont("times", 15, QFont::Bold));
    scribbleArea->setMyText("Hello");
}

void MainWindow::on_emote2Button_clicked()
{
    scribbleArea->setMyFont(QFont("papyrus", 20));
    scribbleArea->setMyText("I love you!");
}

void MainWindow::on_emote3Button_clicked()
{
    scribbleArea->setMyFont(QFont("forte", 50, QFont::Bold));
    scribbleArea->setMyText("YAY!");
}

void MainWindow::on_emote4Button_clicked()
{
    scribbleArea->setMyFont(QFont("times", 20));
    scribbleArea->setMyText("(ﾉ◕ヮ◕)ﾉ*:･ﾟ✧");
}

void MainWindow::on_emote5Button_clicked()
{
    scribbleArea->setMyFont(QFont("times", 20));
    scribbleArea->setMyText("(⁄ ⁄•⁄ω⁄•⁄ ⁄)");
}

void MainWindow::on_emote6Button_clicked()
{
    scribbleArea->setMyFont(QFont("times", 20));
    scribbleArea->setMyText("(」°ロ°)」");
}

void MainWindow::on_eraserPushButton_clicked()
{
    scribbleArea->setIsEraser(true);
    scribbleArea->setMyPenColor(Qt::white);
}

void MainWindow::on_brushPushButton_clicked()
{
    scribbleArea->setIsEraser(false);
    scribbleArea->setMyPenColor(Qt::black);
}

void MainWindow::on_clearPushButton_clicked()
{
    scribbleArea->newImage();
}
