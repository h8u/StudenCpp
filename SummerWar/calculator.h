#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class calculator; }
QT_END_NAMESPACE

class calculator : public QMainWindow
{
    Q_OBJECT

public:
    calculator(QWidget *parent = nullptr);
    ~calculator();

private:
    Ui::calculator *ui;
    double value;
    double result = 0;
    double first_value;
    double second_value;

    bool plusClckd = false;
    bool minusClckd = false;
    bool multiClckd = false;
    bool divClckd = false;

    bool waitingForOperand = false;

private slots:
    void digitClicked();
    void clearClicked();
    void delClicked();
    void plusClicked();
    void ravnoClicked();
    void minusClicked();
    void multiClicked();
    void divClicked();
    void dotClicked();



};
#endif // CALCULATOR_H
