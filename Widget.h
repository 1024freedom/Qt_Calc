#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

enum class BtnType{//按钮类型
    Num,//数字
    Op,//运算符
    Point,//小数点
    Equal,//等于
    Empty,//清除
    Delete,//删除
    Oppo,//取反
};

enum class Priority{//运算符优先级((优先级最低，取反运算单独处理)
    PARENTHESES=0,
    ADD_SUB=1,
    MUL_DIV_MOD=2,
};

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    double strCalc(QString str);
    ~Widget();

private:
    Ui::Widget *ui;

public slots:
    void onClicked(BtnType type,QString num);
};
#endif // WIDGET_H
