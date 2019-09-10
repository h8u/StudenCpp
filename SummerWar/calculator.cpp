#include "calculator.h"
#include "ui_calculator.h"
#include <qmath.h>
#define PI 3.14159265

calculator::calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::calculator)
{
    ui->setupUi(this);
    connect(ui->button_0, SIGNAL(clicked()), this, SLOT(digitClicked()));
    connect(ui->button_1, SIGNAL(clicked()), this, SLOT(digitClicked()));
    connect(ui->button_2, SIGNAL(clicked()), this, SLOT(digitClicked()));
    connect(ui->button_3, SIGNAL(clicked()), this, SLOT(digitClicked()));
    connect(ui->button_4, SIGNAL(clicked()), this, SLOT(digitClicked()));
    connect(ui->button_5, SIGNAL(clicked()), this, SLOT(digitClicked()));
    connect(ui->button_6, SIGNAL(clicked()), this, SLOT(digitClicked()));
    connect(ui->button_7, SIGNAL(clicked()), this, SLOT(digitClicked()));
    connect(ui->button_8, SIGNAL(clicked()), this, SLOT(digitClicked()));
    connect(ui->button_9, SIGNAL(clicked()), this, SLOT(digitClicked()));

    connect(ui->button_C, SIGNAL(clicked()), this, SLOT(clearClicked()));
    connect(ui->button_del, SIGNAL(clicked()), this, SLOT(delClicked()));

    connect(ui->button_plus, SIGNAL(clicked()), this, SLOT(plusClicked()));

    connect(ui->button_ravno, SIGNAL(clicked()), this, SLOT(ravnoClicked()));
    connect(ui->button_minus, SIGNAL(clicked()), this, SLOT(minusClicked()));

    connect(ui->button_multi, SIGNAL(clicked()), this, SLOT(multiClicked()));
    connect(ui->button_div, SIGNAL(clicked()), this, SLOT(divClicked()));

    connect(ui->button_dot, SIGNAL(clicked()), this, SLOT(dotClicked()));


}

calculator::~calculator()
{
    delete ui;
}

void calculator::digitClicked()
{

    QPushButton *clicked;
    clicked = qobject_cast<QPushButton *>(sender());
    value = clicked->text().toInt(); //преобразование строки в целое число.
    ui->lineEdit->setText(ui->lineEdit->text() + QString::number(value)); //преобразование целого числа в строку.
}

void calculator::clearClicked()
{
    ui->lineEdit->clear();
}

void calculator::delClicked()
{
    QString text = ui->lineEdit->text();
    text.chop(1);       //Удаляет последний символ
    if (text.isEmpty())
    {
            text = ' ';
    }
    ui->lineEdit->setText(text);


}

void calculator::plusClicked()
{
    waitingForOperand = true;
    first_value = ui->lineEdit->text().toDouble();
    ui->lineEdit->clear();
    plusClckd = true;
    QPushButton *clicked;
    clicked = qobject_cast<QPushButton *>(sender());
    value = clicked->text().toDouble();
}

void calculator::minusClicked()
{
    waitingForOperand = true;
    first_value = ui->lineEdit->text().toDouble();
    ui->lineEdit->clear();
    minusClckd = true;
    QPushButton *clicked;
    clicked = qobject_cast<QPushButton *>(sender());
    value = clicked->text().toDouble();
}

void calculator::multiClicked()
{
    waitingForOperand = true;
    first_value = ui->lineEdit->text().toDouble();
    ui->lineEdit->clear();
    multiClckd = true;
    QPushButton *clicked;
    clicked = qobject_cast<QPushButton *>(sender());
    value = clicked->text().toDouble();
}

void calculator::divClicked()
{
    waitingForOperand = true;
    first_value = ui->lineEdit->text().toDouble();
    ui->lineEdit->clear();
    divClckd = true;
    QPushButton *clicked;
    clicked = qobject_cast<QPushButton *>(sender());
    value = clicked->text().toDouble();
}

void calculator::dotClicked()
{
     ui->lineEdit->setText(ui->lineEdit->text() + '.');
}


void calculator::ravnoClicked()
{
    if (waitingForOperand == true)
    {
        second_value = ui->lineEdit->text().toDouble();
        waitingForOperand = false;
    }
    ui->lineEdit->clear();


    if (plusClckd == true)
    {
        result = first_value + second_value;
        plusClckd = false;
    }
    if (minusClckd == true)
    {
        result = first_value - second_value;
        minusClckd = false;
    }
    if (multiClckd == true)
    {
        result = first_value * second_value;
        multiClckd = false;
    }
    if (divClckd == true)
    {
        if (second_value != 0.0)
        {
            result = first_value / second_value;
        }
        divClckd = false;
    }

    ui->lineEdit->setText(QString::number(result));
}
