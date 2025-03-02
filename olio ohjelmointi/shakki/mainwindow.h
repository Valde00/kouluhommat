#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void on_switch1_clicked();
    void on_switch2_clicked();
    void on_timeButton1_clicked();
    void on_timeButton2_clicked();
    void on_startButton_clicked();
    void on_stopButton_clicked();

    void updateTimer();
    void updateProgressBar();
    void setGameInfoText(QString text, short fontSize);
private:
    Ui::MainWindow *ui;

    QTimer *gameTimer;
    int player1Time, player2Time;
    int currentPlayer;
    int gameTime;
    bool gameOn;
};
#endif // MAINWINDOW_H
