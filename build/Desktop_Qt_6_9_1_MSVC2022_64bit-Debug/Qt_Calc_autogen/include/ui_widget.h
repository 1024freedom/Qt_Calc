/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLineEdit *lineEdit;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPushButton *Num2;
    QPushButton *Num4;
    QPushButton *Num9;
    QPushButton *Sum;
    QPushButton *Num7;
    QPushButton *Sub;
    QPushButton *Mod;
    QPushButton *Oppo;
    QPushButton *Num1;
    QPushButton *Point;
    QPushButton *Num5;
    QPushButton *Equal;
    QPushButton *Num0;
    QPushButton *Num6;
    QPushButton *Divide;
    QPushButton *Num8;
    QPushButton *Multi;
    QPushButton *Num3;
    QPushButton *Empty;
    QPushButton *Delete;
    QPushButton *ParenLeft;
    QPushButton *ParenRight;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(427, 327);
        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(0, 0, 431, 81));
        QFont font;
        font.setPointSize(22);
        lineEdit->setFont(font);
        lineEdit->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        lineEdit->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        widget = new QWidget(Widget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 80, 431, 244));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        Num2 = new QPushButton(widget);
        Num2->setObjectName("Num2");
        QFont font1;
        font1.setPointSize(16);
        Num2->setFont(font1);

        gridLayout->addWidget(Num2, 3, 1, 1, 1);

        Num4 = new QPushButton(widget);
        Num4->setObjectName("Num4");
        Num4->setFont(font1);

        gridLayout->addWidget(Num4, 2, 0, 1, 1);

        Num9 = new QPushButton(widget);
        Num9->setObjectName("Num9");
        Num9->setFont(font1);

        gridLayout->addWidget(Num9, 1, 2, 1, 1);

        Sum = new QPushButton(widget);
        Sum->setObjectName("Sum");
        Sum->setFont(font1);

        gridLayout->addWidget(Sum, 3, 3, 1, 1);

        Num7 = new QPushButton(widget);
        Num7->setObjectName("Num7");
        Num7->setFont(font1);

        gridLayout->addWidget(Num7, 1, 0, 1, 1);

        Sub = new QPushButton(widget);
        Sub->setObjectName("Sub");
        Sub->setFont(font1);

        gridLayout->addWidget(Sub, 2, 3, 1, 1);

        Mod = new QPushButton(widget);
        Mod->setObjectName("Mod");
        Mod->setFont(font1);

        gridLayout->addWidget(Mod, 4, 0, 1, 1);

        Oppo = new QPushButton(widget);
        Oppo->setObjectName("Oppo");
        Oppo->setFont(font1);

        gridLayout->addWidget(Oppo, 0, 2, 1, 1);

        Num1 = new QPushButton(widget);
        Num1->setObjectName("Num1");
        Num1->setFont(font1);

        gridLayout->addWidget(Num1, 3, 0, 1, 1);

        Point = new QPushButton(widget);
        Point->setObjectName("Point");
        Point->setFont(font1);

        gridLayout->addWidget(Point, 4, 2, 1, 1);

        Num5 = new QPushButton(widget);
        Num5->setObjectName("Num5");
        Num5->setFont(font1);

        gridLayout->addWidget(Num5, 2, 1, 1, 1);

        Equal = new QPushButton(widget);
        Equal->setObjectName("Equal");
        Equal->setFont(font1);

        gridLayout->addWidget(Equal, 4, 3, 1, 1);

        Num0 = new QPushButton(widget);
        Num0->setObjectName("Num0");
        Num0->setFont(font1);

        gridLayout->addWidget(Num0, 4, 1, 1, 1);

        Num6 = new QPushButton(widget);
        Num6->setObjectName("Num6");
        Num6->setFont(font1);

        gridLayout->addWidget(Num6, 2, 2, 1, 1);

        Divide = new QPushButton(widget);
        Divide->setObjectName("Divide");
        Divide->setFont(font1);

        gridLayout->addWidget(Divide, 0, 3, 1, 1);

        Num8 = new QPushButton(widget);
        Num8->setObjectName("Num8");
        Num8->setFont(font1);

        gridLayout->addWidget(Num8, 1, 1, 1, 1);

        Multi = new QPushButton(widget);
        Multi->setObjectName("Multi");
        Multi->setFont(font1);

        gridLayout->addWidget(Multi, 1, 3, 1, 1);

        Num3 = new QPushButton(widget);
        Num3->setObjectName("Num3");
        Num3->setFont(font1);

        gridLayout->addWidget(Num3, 3, 2, 1, 1);

        Empty = new QPushButton(widget);
        Empty->setObjectName("Empty");
        Empty->setFont(font1);

        gridLayout->addWidget(Empty, 0, 0, 1, 1);

        Delete = new QPushButton(widget);
        Delete->setObjectName("Delete");
        Delete->setFont(font1);

        gridLayout->addWidget(Delete, 0, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 2);

        ParenLeft = new QPushButton(widget);
        ParenLeft->setObjectName("ParenLeft");
        ParenLeft->setFont(font1);

        gridLayout_2->addWidget(ParenLeft, 1, 0, 1, 1);

        ParenRight = new QPushButton(widget);
        ParenRight->setObjectName("ParenRight");
        ParenRight->setFont(font1);

        gridLayout_2->addWidget(ParenRight, 1, 1, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        lineEdit->setText(QString());
        Num2->setText(QCoreApplication::translate("Widget", "2", nullptr));
        Num4->setText(QCoreApplication::translate("Widget", "4", nullptr));
        Num9->setText(QCoreApplication::translate("Widget", "9", nullptr));
        Sum->setText(QCoreApplication::translate("Widget", "+", nullptr));
        Num7->setText(QCoreApplication::translate("Widget", "7", nullptr));
        Sub->setText(QCoreApplication::translate("Widget", "-", nullptr));
        Mod->setText(QCoreApplication::translate("Widget", "%", nullptr));
        Oppo->setText(QCoreApplication::translate("Widget", "+/-", nullptr));
        Num1->setText(QCoreApplication::translate("Widget", "1", nullptr));
        Point->setText(QCoreApplication::translate("Widget", ".", nullptr));
        Num5->setText(QCoreApplication::translate("Widget", "5", nullptr));
        Equal->setText(QCoreApplication::translate("Widget", "=", nullptr));
        Num0->setText(QCoreApplication::translate("Widget", "0", nullptr));
        Num6->setText(QCoreApplication::translate("Widget", "6", nullptr));
        Divide->setText(QCoreApplication::translate("Widget", "\303\267", nullptr));
        Num8->setText(QCoreApplication::translate("Widget", "8", nullptr));
        Multi->setText(QCoreApplication::translate("Widget", "\303\227", nullptr));
        Num3->setText(QCoreApplication::translate("Widget", "3", nullptr));
        Empty->setText(QCoreApplication::translate("Widget", "AC", nullptr));
        Delete->setText(QCoreApplication::translate("Widget", "<-", nullptr));
        ParenLeft->setText(QCoreApplication::translate("Widget", "(", nullptr));
        ParenRight->setText(QCoreApplication::translate("Widget", ")", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
