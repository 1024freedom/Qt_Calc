#include "Widget.h"
#include "./ui_widget.h"
#include <QStack>
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
double Widget::strCalc(QString str){
    str+="/";
    //运算符优先级映射
    std::unordered_map<QString,Priority> pri={
        {"-",Priority::ADD_SUB},{"+",Priority::ADD_SUB},
        {"*",Priority::MUL_DIV_MOD},{"÷",Priority::MUL_DIV_MOD},
        {"%",Priority::MUL_DIV_MOD}
    };
    QStack<double> num_stack;
    QStack<QChar> op_stack;//使用双栈法实现运算符优先级
    auto calc=[&](){
        double b = num_stack.top();
        num_stack.pop();
        double a = num_stack.top();
        num_stack.pop();
        QChar op = op_stack.top();
        op_stack.pop();

        switch(op.unicode()) {
            case '+':
                num_stack.push(a + b);
                break;
            case '-':
                num_stack.push(a - b);
                break;
            case '*':
                num_stack.push(a * b);
                break;
            case '/':
                num_stack.push(a / b);
                break;
            case '%':
                num_stack.push(std::fmodf(a,b));
                break;
        }
    };
    for(int i=0;i<str.size()-1;i++){
        QChar c=str[i];

        if(c.isDigit()&&str[i+1]!='.'&&!str[i+1].isDigit()){
            num_stack.push(QString(c).toDouble());
        }else if(c.isDigit()&&str[i+1]=='.'){
            double num=QString(c).toDouble();
            int weight=0;//小数权重
            int j;
            for(j=i+1;j<str.size()-1;j++){
                if(!str[j].isDigit()){
                    break;
                }
                weight++;
                num+=QString(str[j]).toDouble()/pow(10,weight);
            }
            i=j-1;
            num_stack.push(num);
        }else if(c.isDigit()&&str[i+1].isDigit()){
            double num=0;
            bool flag=false;//判断是否进入小数部分
            int weight=0;//小数权重
            int j;
            for(j=i;j<str.size()-1;j++){
                if(!str[j].isDigit()&&str[j]!='.'){
                    break;
                }else if(str[j]=='.'){
                    flag=true;
                }
                if(flag){
                    weight++;
                    num+=QString(str[j]).toDouble()/pow(10,weight);
                }else{
                    num=num*10.0+QString(str[j]).toDouble();
                }

            }
            i=j-1;
            num_stack.push(num);
        }else{//运算符处理逻辑
            if(op_stack.isEmpty()){
                op_stack.push(c);
            }else if(c=='('){
                op_stack.push(c);
            }else if(c==')'){
                while(op_stack.top()!='('&&!op_stack.isEmpty()){
                    calc();
                }
                op_stack.pop();
            }else if(c=='/'){
                break;
            }else if(pri[op_stack.top()]>=pri[c]){
                while(pri[op_stack.top()]>=pri[c]&&!op_stack.isEmpty()){
                    calc();
                }
                op_stack.push(c);
            }
        }
    }
    while(!op_stack.isEmpty()){
        calc();
    }
    return num_stack.top();
}
void Widget::onClicked(BtnType type, QString push_input){
    static QString str="";//用于显示运算式子
    switch(type){
        case BtnType::Num:
            str+=push_input;
            break;
        case BtnType::Op:
            str+=push_input;
            break;
        case BtnType::Point:
            str+=push_input;
            break;
        case BtnType::Equal:
            //执行运算显示结果
            str=QString::number(strCalc(str),'g',6);//六位有效数字
            break;
        case BtnType::Delete:
            str.chop(1);
            break;
        case BtnType::Oppo:{
            //执行取反运算并显示结果
            double res=QString(str).toDouble()*(-1);
            str=QString::number(res,'g',6);
            break;
        }
        case BtnType::Empty:
            str.clear();
            break;
    }
        ui->lineEdit->setText(str);
}
