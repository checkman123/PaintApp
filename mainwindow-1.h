#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "scribblearea.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_smallBrushButton_clicked();

    void on_mediumBrushButton_clicked();

    void on_largeBrushButton_clicked();

    void on_blackBrushButton_clicked();

    void on_redBrushButton_clicked();

    void on_blueBrushButton_clicked();

    void on_greenBrushButton_clicked();

    void on_yellowBrushButton_clicked();

    void on_purpleBrushButton_clicked();

    void on_emote1Button_clicked();

    void on_emote2Button_clicked();

    void on_emote3Button_clicked();

    void on_emote4Button_clicked();

    void on_emote5Button_clicked();

    void on_emote6Button_clicked();

    void on_eraserPushButton_clicked();

    void on_brushPushButton_clicked();

    void on_clearPushButton_clicked();

private:
    Ui::MainWindow *ui;
    ScribbleArea *scribbleArea;
};

#endif // MAINWINDOW_H
