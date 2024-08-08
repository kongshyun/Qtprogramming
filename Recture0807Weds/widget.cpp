/*----------04장 Qt의 레이아웃----------*/

/*
//QHBoxLayout클래스--------------------------------------------------
#include "widget.h"
#include <QHBoxLayout>
#include <QPushButton>


Widget::Widget(QWidget *parent): QWidget(parent)
{
    QPushButton *pushButton1 = new QPushButton();
    pushButton1 -> setText("Button1");
    QPushButton *pushButton2 =new QPushButton("Button2");
    QPushButton *pushButton3 = new QPushButton("Button3",this);

    QHBoxLayout *hBoxLayout = new QHBoxLayout;
    hBoxLayout -> setContentsMargins(0,0,0,0);
    hBoxLayout->addWidget(pushButton1);
    hBoxLayout->addWidget(pushButton2);
    hBoxLayout->addWidget(pushButton3);
    setLayout(hBoxLayout);

}

Widget::~Widget() {}
*/



/*

//QGridLayout클래스--------------------------------------------------
#include "widget.h"
#include <QGridLayout>
#include <QPushButton>
#define NO_OF_ROW 3

Widget::Widget(QWidget *parent): QWidget(parent)
{
    QGridLayout *gridLayout = new QGridLayout;
    QPushButton * pushButton[NO_OF_ROW * NO_OF_ROW];
    for(int y=0;y<NO_OF_ROW;y++){
        for(int x=0;x<NO_OF_ROW;x++){
            int p=x+y*NO_OF_ROW;
            QString str=QString("Button%1").arg(p+1);
            pushButton[p]=new QPushButton(str,this);
            gridLayout -> addWidget(pushButton[p],x,y);
        }
    }

    setLayout(gridLayout);
}
Widget::~Widget() {}


*/
/*
//QStackedLayout클래스--------------------------------------------------
#include <QStackedLayout>
#include <QHBoxLayout>
#include <QDial>
#include <QLabel>
#include <QCalendarWidget>
#include <QTextEdit>
#include "widget.h"

Widget::Widget(QWidget *parent):QWidget(parent)
{
    QDial *dial = new QDial(this);
    dial -> setRange(0,2);

    QLabel *label = new QLabel("Stack 1",this);
    QCalendarWidget * calendarWidget = new QCalendarWidget(this);
    QTextEdit *textEdit = new QTextEdit("Stack 3",this);
    QStackedLayout *stackedLayout = new QStackedLayout(this);

}
Widget::~Widget(){}
*/


/*
//QGroupBox위젯---------------------------------------------------------------------
#include "widget.h"
#include <QGroupBox>
#include <QFormLayout>
#include <QtWidgets>

Widget::Widget(QWidget *parent) : QWidget(parent)
{
    QStringList labels;
    labels<<"&IP Address" <<"&Mac Address"<< "&Data";
    QLineEdit* lineEdit[3];
    QFormLayout *formLayout = new QFormLayout;
    for(int i=0;i<3;i++){
        lineEdit[i] = new QLineEdit(this);
        formLayout -> addRow(labels.at(i),lineEdit[i]);
    }
    QGroupBox *groupBox = new QGroupBox("&Widget Group",this);
    groupBox -> move(5,5);
    groupBox -> setLayout(formLayout);

    resize(groupBox ->sizeHint().width()+10,
           groupBox->sizeHint().height()+10);

}
Widget::~Widget(){}
*/

/*
//QTabWidget위젯---------------------------------------------------------------------
#include "widget.h"
#include <QTextEdit>
#include <QCalendarWidget>
#include <QDial>
#include <QTabWidget>

Widget::Widget(QWidget *parent) : QWidget(parent)
{
    QDial *dial = new QDial(this);
    QCalendarWidget* calendarWidget = new QCalendarWidget(this);
    QTextEdit * textEdit = new QTextEdit ("Tab 3",this);

    QTabWidget *tabWidget = new QTabWidget(this);
    tabWidget -> addTab(dial,"Tab &1");
    tabWidget -> addTab(calendarWidget,"Tab &2");
    tabWidget -> addTab(textEdit,"Tab &3");
    resize(tabWidget->sizeHint());
}
Widget::~Widget(){}

*/


/*
//QSplitter위젯---------------------------------------------------------------------
//가운데 조정으로 크기 조절이 됨.
#include <QSplitter>
#include <QLabel>
#include <QDial>
#include "widget.h"

Widget::Widget(QWidget*parent) : QWidget(parent){
    QLabel *label = new QLabel("&Value",this);
    QDial *dial1=new QDial(this);
    QDial *dial2=new QDial(this);
    label ->setBuddy(dial2);

    QSplitter *splitter = new QSplitter(this);
    splitter -> addWidget(label);
    splitter -> addWidget(dial1);
    splitter -> addWidget(dial2);

    resize(splitter->sizeHint());
}

Widget::~Widget() {}

*/

//계산기
#include "widget.h"
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QGridLayout>
#include <QButtonGroup>

#define WIDTH 4

Widget::Widget(QWidget *parent)
    :QWidget(parent),m_isFirst(true){

    m_label =new QLabel("0",this);
    m_label -> setAlignment(Qt::AlignRight | Qt::AlignVCenter);

    m_label -> setFrameShape(QFrame::Box);
    m_label -> setMaximumHeight(30);

    const char ButtonChar[16][2]={
        "7","8","9","/",
        "4","5","6","x",
        "1","2","3","-",
        "0","C","=","+"
    };

    QGridLayout *gridLayout = new QGridLayout();
    buttonGroup=new QButtonGroup(this);
    connect(buttonGroup,SIGNAL(idClicked(int)),SLOT(click(int)));
    for(int y=0;y<WIDTH;++y){
        for(int x=0;x<WIDTH;++x){
            int n=x+y*WIDTH;
            QPushButton *button = new QPushButton(ButtonChar[n], this);
            buttonGroup -> addButton(new QPushButton(ButtonChar[n],this),n);
            //m_buttons.append(new QPushButton(ButtonChar[n],this));
            gridLayout -> addWidget(buttonGroup -> button(n), n/WIDTH,n%WIDTH);
            //if(n!=13 && n!=14)
            //    connect(m_buttons.at(n),SIGNAL(clicked()),methods[n]);
        }
    }
/*
    connect(m_button.at(0),SIGNAL(clicked()),SLOT(setNum()));
    connect(m_buttons.at(1),SIGNAL(clicked()),SLOT(setNum()));
    connect(m_buttons.at(2),SIGNAL(clicked()),SLOT(setNum()));
    connect(m_buttons.at(4),SIGNAL(clicked()),SLOT(setNum()));
    connect(m_buttons.at(5),SIGNAL(clicked()),SLOT(setNum()));
    connect(m_buttons.at(6),SIGNAL(clicked()),SLOT(setNum()));
    connect(m_buttons.at(8),SIGNAL(clicked()),SLOT(setNum()));
    connect(m_buttons.at(9),SIGNAL(clicked()),SLOT(setNum()));
    connect(m_buttons.at(10),SIGNAL(clicked()),SLOT(setNum()));
    connect(m_buttons.at(12),SIGNAL(clicked()),SLOT(setNum()));

    connect(m_buttons.at(13),&QPushButton ::clicked,this,[=](){m_label ->setText("0");});

    connect(m_buttons.at(3),SIGNAL(clicked()),SLOT(setOp()));
    connect(m_buttons.at(7),SIGNAL(clicked()),SLOT(setOp()));
    connect(m_buttons.at(11),SIGNAL(clicked()),SLOT(setOp()));
    connect(m_buttons.at(15),SIGNAL(clicked()),SLOT(setOp()));
*/

    //connect(m_buttons.at)
    setWindowTitle("Calculator");
    QVBoxLayout *vBoxLayout=new QVBoxLayout(this);
    vBoxLayout -> setContentsMargins(6,6,6,6);
    vBoxLayout -> addWidget(m_label);
    vBoxLayout -> addLayout(gridLayout);
    setLayout(vBoxLayout);
}
Widget::~Widget(){
    delete m_label;
    //Q_FOREATH(auto b, buttonGroup -> buttons()) delete b;
}

void Widget::click(int id){
    //QPushButton *button = (QPushButton*)((QButtonGroup*)sender() -> button(id));
    QPushButton *button = qobject_cast<QPushButton*>(buttonGroup->button(id));
    QString bStr;
    if(button!=nullptr) bStr=button ->text();
    switch(id){
        case0:case1:case2:
        case4:case5:case6:
        case8:case9:case10:
        case12:
            if(m_label!=nullptr){
                QString IStr=m_label ->text();
                m_label ->setText((IStr == "0" | m_isFirst)?bStr:IStr+bStr);
                m_isFirst=false;
            }
            break;
        case3:case7:case11:case15:
            if(m_label !=nullptr)
                m_num1 = m_label -> text();
            m_op=bStr;
            m_isFirst = true;
            break;
        case13:case14:break;

    }
}
