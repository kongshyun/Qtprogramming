

/*
//QRadioButton 위젯--------------------------------------------
#include<QButtonGroup>
#include<QRadioButton>
#include "widget.h"

Widget::Widget(QWidget *parent):QWidget(parent)
{
    resize(140,110);
    buttonGroup = new QButtonGroup(this);
    for(int i=0;i<4;i++){
        QString str=QString("RadioButton %1").arg(i+1);
        radioButton[i]=new QRadioButton(str,this);
        radioButton[i] -> move(10,10+20*i);
        buttonGroup -> addButton(radioButton[i]);
    }
}

Widget::~Widget() {}

*/



//QCheckBox위젯-----------------------------------------------------------
#include "widget.h"
#include <QcheckBox>
#include <QButtonGroup>
#include <QLabel>
#include <QWidget>


void Widget::selectButton(int id){
    QButtonGroup * buttonGroup = (QButtonGroup*)sender();
    QCheckBox *button = (QCheckBox*)buttonGroup->button(id);
    qDebug("CheckBox%d is selected(%s)",id+1,
           (button->isChecked())?"On":"Off");
    label -> setText(QString ::number(id+1));
}

Widget::Widget(QWidget *parent) : QWidget(parent)
{
    resize(140,110);
    buttonGroup = new QButtonGroup(this);
    buttonGroup -> setExclusive(false);
    connect(buttonGroup,SIGNAL(idClicked(int)),SLOT(selectButton(int)));
    for(int i=0;i<4;i++){
        QString str=QString("CheckBox %1").arg(i+1);
        checkBox[i]=new QCheckBox(str,this);
        checkBox[i] -> move(10,10+20*i);
        buttonGroup -> addButton(checkBox[i],i+1);
    }
    /*
    label=new QLabel("0",this);
    label->move(10,10);
    connect(buttonGroup,&QButtonGroup::idClicked,
            [=](int id)mutable{label -> setText(QString::number(id+1));});


    for(int i=0;i<4;i++){
        QString str=QString("CheckBox %1").arg(i+1);
        checkBox[i]=new QCheckBox(str,this);
        checkBox[i] -> move(10,30+20*i);
        buttonGroup -> addButton(checkBox[i],i);
    }
*/
}

Widget::~Widget() {}




//QSlider위젯---------------------------------------------------------------------

