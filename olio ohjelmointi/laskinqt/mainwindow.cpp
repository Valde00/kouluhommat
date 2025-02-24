#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setActiveControls();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_add_clicked()
{
    if (CalcMode == 3){
        QString num1text = ui->num1->text();
        QString num2text = ui->num2->text();

        int numero1 = num1text.toInt();
        int numero2 = num2text.toInt();

        QString ResultText = QString::number(numero1 + numero2);
        ui->result->setText(ResultText);
        CalcMode = 1;
        setActiveControls();
    }
}


void MainWindow::on_sub_clicked()
{
    if (CalcMode == 3){
        QString num1text = ui->num1->text();
        QString num2text = ui->num2->text();

        int numero1 = num1text.toInt();
        int numero2 = num2text.toInt();

        QString ResultText = QString::number(numero1 - numero2);
        ui->result->setText(ResultText);
        CalcMode = 1;
        setActiveControls();
    }
}


void MainWindow::on_mul_clicked()
{
    if (CalcMode == 3){
        QString num1text = ui->num1->text();
        QString num2text = ui->num2->text();

        int numero1 = num1text.toInt();
        int numero2 = num2text.toInt();

        QString ResultText = QString::number(numero1 * numero2);
        ui->result->setText(ResultText);
        CalcMode = 1;
        setActiveControls();
    }
}


void MainWindow::on_div_clicked()
{
    if (CalcMode == 3){
        QString num1text = ui->num1->text();
        QString num2text = ui->num2->text();

        int numero1 = num1text.toInt();
        int numero2 = num2text.toInt();

        QString ResultText = QString::number(numero1 / numero2);
        ui->result->setText(ResultText);
        CalcMode = 1;
        setActiveControls();
    }
}

void MainWindow::numberClickHandler(int n)
{
    QString str = QString::number(n);
    if (CalcMode == 1){
        ui->num1->setText(str);
    }
    else if (CalcMode == 2){
        ui->num2->setText(str);
    }
}

void MainWindow::setActiveControls()
{
    if (CalcMode == 1){
        ui->num1->setEnabled(true);
        ui->num2->setEnabled(false);
        ui->result->setEnabled(false);
        ui->add->setEnabled(false);
        ui->sub->setEnabled(false);
        ui->mul->setEnabled(false);
        ui->div->setEnabled(false);
    } else if (CalcMode == 2){
        ui->num1->setEnabled(false);
        ui->num2->setEnabled(true);
        ui->result->setEnabled(false);
        ui->add->setEnabled(false);
        ui->sub->setEnabled(false);
        ui->mul->setEnabled(false);
        ui->div->setEnabled(false);
    }else if (CalcMode == 3){
        ui->num1->setEnabled(false);
        ui->num2->setEnabled(false);
        ui->result->setEnabled(true);
        ui->add->setEnabled(true);
        ui->sub->setEnabled(true);
        ui->mul->setEnabled(true);
        ui->div->setEnabled(true);
    }
}


void MainWindow::on_enter_clicked()
{

    if(CalcMode == 1){
        CalcMode = 2;
    }
    else if (CalcMode == 2)
    {
        CalcMode = 3;
    }
    else {
        CalcMode = 1;
    }
    setActiveControls();
}

void MainWindow::on_N1_clicked()
{
    QString str = ui->N1->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N2_clicked()
{
    QString str = ui->N2->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N3_clicked()
{
    QString str = ui->N3->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N4_clicked()
{
    QString str = ui->N4->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N5_clicked()
{
    QString str = ui->N5->text();
    int n = str.toInt();
    numberClickHandler(n);
}

void MainWindow::on_N6_clicked()
{
    QString str = ui->N6->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N7_clicked()
{
    QString str = ui->N7->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N8_clicked()
{
    QString str = ui->N8->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N9_clicked()
{
    QString str = ui->N9->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N0_clicked()
{
    QString str = ui->N0->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_clear_clicked()
{
    ui->num1->clear();
    ui->num2->clear();
    ui->result->clear();
    CalcMode = 1;
    setActiveControls();
}
