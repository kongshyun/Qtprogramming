#include "widget.h"

#include <QLabel>
#include <QPushButton>

Widget::Widget(QWidget *parent) : QWidget(parent), m_isFirst(true){
    m_label = new QLabel("O",this); //레이블 객체 생성
    m_label -> setAlignment(Qt::AlignRight | Qt::AlignVCenter); //
    m_label -> setGeometry(10,5,230,40); //위치와 크기 설정
    const char ButtonChar[16][2]={
        "7","8","9","/",
        "4","5","6","x",
        "1","2","3","-",
        "0","C","=","+"
    };
    for(int y=0;y<WIDTH;++y){   //4 x 4 의 2차원으로 배치
        for(int x=0;x<WIDTH;++x){
            m_buttons.append(new QPushButton(ButtonChar[x+y*WIDTH],this));
            m_buttons.at(x+y*WIDTH) -> setGeometry(5+60*x, 50+60*y,60,60);
        }
    }
    connect(m_buttons.at(0),SIGNAL(clicked()),SLOT(setNum()));
    connect(m_buttons.at(1),SIGNAL(clicked()),SLOT(setNum()));
    connect(m_buttons.at(2),SIGNAL(clicked()),SLOT(setNum()));
    connect(m_buttons.at(4),SIGNAL(clicked()),SLOT(setNum()));
    connect(m_buttons.at(5),SIGNAL(clicked()),SLOT(setNum()));
    connect(m_buttons.at(6),SIGNAL(clicked()),SLOT(setNum()));
    connect(m_buttons.at(8),SIGNAL(clicked()),SLOT(setNum()));
    connect(m_buttons.at(9),SIGNAL(clicked()),SLOT(setNum()));
    connect(m_buttons.at(10),SIGNAL(clicked()),SLOT(setNum()));
    connect(m_buttons.at(12),SIGNAL(clicked()),SLOT(setNum()));

    //clear버튼을 위한 시그널/슬롯 연결:람다함수
    connect(m_buttons.at(13),&QPushButton::clicked,this,[=](){m_label -> setText("0");});

    //연산자를 위한 버튼을 위한 시그널/슬롯 연결
    connect(m_buttons.at(3),SIGNAL(clicked()),SLOT(setOp()));
    connect(m_buttons.at(7),SIGNAL(clicked()),SLOT(setOp()));
    connect(m_buttons.at(11),SIGNAL(clicked()),SLOT(setOp()));
    connect(m_buttons.at(15),SIGNAL(clicked()),SLOT(setOp()));

    connect(m_buttons.at(14),&QPushButton::clicked,this,[this](){
        qreal result =0;
        m_isFirst=true;
        if(m_op == "+") //덧셈
            result = m_num1.toDouble() + m_label -> text().toDouble();
        else if(m_op == "-") //뺄셈
            result = m_num1.toDouble() - m_label -> text().toDouble();
        else if(m_op == "x") //곱셈
            result = m_num1.toDouble() * m_label -> text().toDouble();
        else if(m_op == "/") //나눗셈
            if(m_label->text().toDouble()!=0){
                result = m_num1.toDouble() / m_label -> text().toDouble();
            }else {
                m_label -> setText("Error : Cannot Divide by Zero");
                return;
            }
        m_label -> setText(QString::number(result)); //숫자를 QString으로 변경

    });
    setMinimumSize(250,295);    //윈도우 최소크기
    setMaximumSize(250,295);    //윈도우 최대크기
    setWindowTitle("Calculator"); //윈도우의 타이틀바 설정
}

Widget::~Widget(){
    delete m_label;
    m_buttons.clear();
//  Q_FOREACH
}

void Widget::setNum(){
    QPushButton *button = dynamic_cast<QPushButton*>(sender());
    QString bStr;
    if(button != nullptr) bStr = button -> text();
    if(m_label!=nullptr){
        QString IStr=m_label -> text();
        m_label -> setText((IStr == "0"|m_isFirst)?bStr:IStr+bStr);
        m_label -> setText(QString::number(IStr.toDouble()*10 + bStr.toDouble()));

        m_isFirst=false;
    }
}

void Widget::setOp(){
    QPushButton *button = dynamic_cast<QPushButton*>(sender());
    if(button != nullptr) m_op = button -> text();
    if(m_label != nullptr){
        m_num1 = m_label -> text();
        m_isFirst = true;
    }
}
