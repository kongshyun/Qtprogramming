//0807 3주차 수요일

/*

//QDial 위젯--------------------------------------------------------
#include <QApplication>
#include <QDial>

int main(int argc,char *argv[])
{
    QApplication a(argc,argv);

    QDial *dial=new QDial();
    dial -> setWrapping(true);
    dial -> setNotchesVisible(true);
    dial -> setNotchTarget(10);//10등분
    dial -> show();

    return a.exec();
}

*/


/*
//QSpinBox 위젯-------------------------------------------------------

#include <QApplication>
#include <QSpinBox>

int main(int argc,char *argv[])
{
    QApplication a(argc,argv);

    QSpinBox *spinBox = new QSpinBox();
    spinBox -> setRange(0,10);
    spinBox -> setSuffix("%");
    spinBox -> setSpecialValueText("Percent");
    spinBox -> show();

    return a.exec();
}*/

/*
//QLineEdit 위젯-------------------------------------------------------

#include <QApplication>
#include <QLineEdit>

int main(int argc, char *argv[])
{
    QApplication a(argc,argv);

    QLineEdit *lineEdit = new QLineEdit();
    lineEdit -> setEchoMode(QLineEdit::PasswordEchoOnEdit);//입력받은 문자를 *기호로 바꾸어 출력
    lineEdit -> setInputMask("HH:HH:HH:HH:HH:HH; ");
    lineEdit -> setPlaceholderText("input the number");
    lineEdit -> show();

    return a.exec();
}*/
//
//MaskNotes000.000.000.000;_IP address; blanks are _.
 //   HH:HH:HH:HH:HH:HH;_MAC address
  //  0000-00-00ISO Date; blanks are space
 //   >AAAAA-AAAAA-AAAAA-AAAAA-AAAAA;#License number; blanks are # and all (alphabetic) characters are converted to uppercase.
//


/*

//QCompleter클래스-------------------------------------------------------
//자동입력 (밑에 보기 뜸)
#include <QApplication>
#include <QLineEdit>
#include <QCompleter>

int main(int argc,char *argv[])
{
    QApplication a(argc,argv);

    QStringList wordList;
    wordList << "alpha" << "omega" << "omicron" << "zeta";

    QLineEdit *lineEdit = new QLineEdit();

    QCompleter *completer = new QCompleter(wordList, lineEdit);
    completer->setCaseSensitivity(Qt::CaseInsensitive);
    lineEdit->setCompleter(completer);
    lineEdit -> show();

    return a.exec();

}

*/

/*

//QComboBox위젯-------------------------------------------------------
#include <QApplication>
#include <QComboBox>

int main(int argc, char* argv[])
{
    QApplication a(argc,argv);
    QComboBox * comboBox = new QComboBox();
    comboBox -> addItem("KDE");
    comboBox -> addItem("김시현");
    comboBox -> addItem("김태원");
    comboBox -> addItem("조세기");
    comboBox -> setEditable(true);
    comboBox -> show();

    return a.exec();
}
*/


/*----------04장 Qt의 레이아웃----------*/
/*
//QHBoxLayout클래스--------------------------------------------------
#include <QApplication>
#include <QStackedLayout>
#include <QHBoxLayout>
#include <QDial>
#include <QLabel>
#include <QCalendarWidget>
#include <QTextEdit>
#include "widget.h"
int main(int argc,char* argv[])
{
    QApplication a(argc,argv);
    Widget widget;
    widget.show();

    return a.exec();
}
*/
/*

#include <QApplication>
#include <QFrame>
#include <QWidget>
#include "widget.h"

int main(int argc,char * argv[])
{
    QApplication a(argc,argv);
    QWidget w;

    QFrame *plainLine= new QFrame(&w);
    plainLine -> setGeometry(QRect(0,0,270,16));
    plainLine -> setLineWidth(2);
    plainLine -> setFrameStyle(QFrame::HLine | QFrame :: Plain);

    QFrame *raisedLine = new QFrame(&w);
    raisedLine -> setGeometry(QRect(0,1,270,16));
    raisedLine -> setLineWidth(2);
    raisedLine->setFrameStyle(QFrame::HLine | QFrame :: Raised);
    QFrame *sunkenLine = new QFrame(&w);
    sunkenLine -> setGeometry(QRect(0,20,270,16));
    sunkenLine ->setLineWidth(2);
    sunkenLine -> setFrameStyle(QFrame::HLine | QFrame::Sunken);

    w.show();
    return a.exec();
}

*/

/*
#include <QApplication>
#include <QFrame>
#include <QWidget>
#include "widget.h"

int main(int argc,char * argv[])
{
    QApplication a(argc,argv);
    QWidget w;

    QFrame *plainLine= new QFrame(&w);
    plainLine -> setGeometry(QRect(0,0,270,16));
    plainLine -> setLineWidth(2);
    plainLine -> setFrameStyle(QFrame::HLine | QFrame :: Plain);

    QFrame *raisedLine = new QFrame(&w);
    raisedLine -> setGeometry(QRect(0,1,270,16));
    raisedLine -> setLineWidth(2);
    raisedLine->setFrameStyle(QFrame::HLine | QFrame :: Raised);
    QFrame *sunkenLine = new QFrame(&w);
    sunkenLine -> setGeometry(QRect(0,20,270,16));
    sunkenLine ->setLineWidth(2);
    sunkenLine -> setFrameStyle(QFrame::HLine | QFrame::Sunken);

    w.show();
    return a.exec();
}
*/
#include<QApplication>
#include <QWidget>
#include "widget.h"
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QGridLayout>

int main(int argc,char * argv[])
{
    QApplication a(argc,argv);
    Widget w;

    w.show();

    return a.exec();
}
