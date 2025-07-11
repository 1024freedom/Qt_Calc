#include "Widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //数字按钮绑定
    connect(ui->Num0,&QPushButton::clicked,this,[this](){
        onClicked(BtnType::Num,"0");
    });
    connect(ui->Num1,&QPushButton::clicked,this,[this](){
        onClicked(BtnType::Num,"1");
    });
    connect(ui->Num2,&QPushButton::clicked,this,[this](){
        onClicked(BtnType::Num,"2");
    });
    connect(ui->Num3,&QPushButton::clicked,this,[this](){
        onClicked(BtnType::Num,"3");
    });
    connect(ui->Num4,&QPushButton::clicked,this,[this](){
        onClicked(BtnType::Num,"4");
    });
    connect(ui->Num5,&QPushButton::clicked,this,[this](){
        onClicked(BtnType::Num,"5");
    });
    connect(ui->Num6,&QPushButton::clicked,this,[this](){
        onClicked(BtnType::Num,"6");
    });
    connect(ui->Num7,&QPushButton::clicked,this,[this](){
        onClicked(BtnType::Num,"7");
    });
    connect(ui->Num8,&QPushButton::clicked,this,[this](){
        onClicked(BtnType::Num,"8");
    });
    connect(ui->Num9,&QPushButton::clicked,this,[this](){
        onClicked(BtnType::Num,"9");
    });
    //运算符按钮绑定
    connect(ui->Sub,&QPushButton::clicked,this,[this](){
        onClicked(BtnType::Op,"-");
    });
    connect(ui->Sum,&QPushButton::clicked,this,[this](){
        onClicked(BtnType::Op,"+");
    });
    connect(ui->Multi,&QPushButton::clicked,this,[this](){
        onClicked(BtnType::Op,"×");
    });
    connect(ui->Divide,&QPushButton::clicked,this,[this](){
        onClicked(BtnType::Op,"÷");
    });
    connect(ui->Mod,&QPushButton::clicked,this,[this](){
        onClicked(BtnType::Op,"%");
    });
    //小数点按钮绑定
    connect(ui->Point,&QPushButton::clicked,this,[this](){
        onClicked(BtnType::Point,".");
    });
    //删除按钮绑定
    connect(ui->Delete,&QPushButton::clicked,this,[this](){
        onClicked(BtnType::Delete,"delete");
    });
    //清空按钮绑定
    connect(ui->Empty,&QPushButton::clicked,this,[this](){
        onClicked(BtnType::Empty,"empty");
    });
    //取反按钮绑定
    connect(ui->Oppo,&QPushButton::clicked,this,[this](){
        onClicked(BtnType::Oppo,"oppo");
    });
    //等于按钮绑定
    connect(ui->Equal,&QPushButton::clicked,this,[this](){
        onClicked(BtnType::Equal,"Equal");
    });
}

Widget::~Widget()
{
    delete ui;
}
void Widget::onClicked(BtnType type, QString num){
    static QString str="";
    str+=num;
    ui->lineEdit->setText(str);
}
