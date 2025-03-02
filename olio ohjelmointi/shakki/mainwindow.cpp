#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    gameTimer = new QTimer(this);
    connect(gameTimer, &QTimer::timeout, this, &MainWindow::updateTimer);

    player1Time = 0;
    player2Time = 0;
    currentPlayer = 1;
    gameTime = 120;
    gameOn = false;
    setGameInfoText("Select playtime and press start game!", 16);
}

void MainWindow::updateTimer()
{
    if(currentPlayer == 1){
        player1Time--;
    } else {
        player2Time--;
    }

    updateProgressBar();

    if(player1Time <= 0){
        gameTimer->stop();
        setGameInfoText("Player 2 WON!", 18);
        gameOn = false;
    }
    else if(player2Time <= 0){
        gameTimer->stop();
        setGameInfoText("Player 1 WON!", 18);
        gameOn = false;
    }
}

void MainWindow::updateProgressBar()
{
    int p1progress = (player1Time * 100) / gameTime;
    int p2progress = (player2Time * 100) / gameTime;

    ui->progressP1->setValue(p1progress);
    ui->progressP2->setValue(p2progress);
}

void MainWindow::setGameInfoText(QString text, short fontSize)
{
    ui->gameLabel->setText(text);
    ui->gameLabel->setStyleSheet("font-size: " + QString::number(fontSize) + "px");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_switch1_clicked()
{
    if(gameOn){
        if(currentPlayer == 1){
            currentPlayer = 2;
        } else {
            currentPlayer = 1;
        }
    }
}

void MainWindow::on_switch2_clicked()
{
    if(gameOn){
        if(currentPlayer == 1){
            currentPlayer = 2;
        } else {
            currentPlayer = 1;
        }
    }
}

void MainWindow::on_timeButton1_clicked()
{
    if(!gameOn){
        gameTime = 120;
    }
}

void MainWindow::on_timeButton2_clicked()
{
    if(!gameOn){
        gameTime = 300;
    }
}

void MainWindow::on_startButton_clicked()
{
    if(!gameOn){
        player1Time = gameTime;
        player2Time = gameTime;
        currentPlayer = 1;

        updateProgressBar();
        gameTimer->start(1000);
        setGameInfoText("Game ongoing", 16);
        gameOn = true;
    }
}

void MainWindow::on_stopButton_clicked()
{
    setGameInfoText("Game stopped", 16);
    gameOn = false;
}
