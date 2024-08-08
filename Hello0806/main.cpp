/*
 *
 * //QLCDNumber위젯(1)

#include <QApplication>
#include "widget.h"
#include <QLCDNumber>

int main(int argc,char* argv[])
{
    QApplication a(argc,argv);

    QLCDNumber *lcd = new QLCDNumber();
    lcd -> setBinMode();
    //lcd -> setHexMode();
    //lcd -> setDecMode();
    //lcd -> setOctMode();
    lcd -> setSegmentStyle(QLCDNumber::Flat);
    lcd ->resize(300,100);
    lcd ->display(50);
    //lcd -> setDigitalCount(15);
    lcd ->show();

    return a.exec();
}


*/

/*
//QProgressBar위젯(1)

#include <QApplication>
#include <QProgressBar>
#include <QTimer>

int main(int argc,char *argv[])
{
    QApplication a(argc,argv);

    QProgressBar*progBar = new QProgressBar();
    progBar -> setRange(0,50);
    progBar -> setValue(20);
    progBar ->show();


    return a.exec();

}
*/

/*
#include <QApplication>
#include <QProgressBar>
#include <QTimer>

int main(int argc, char *argv[])
{
    QApplication a(argc,argv);
    QProgressBar *progBar = new QProgressBar();
    progBar->show();

    QTimer timer;
    int n=0;
    QObject::connect(&timer,&QTimer::timeout,
                     [&]{progBar -> setValue(++n%101);});
    timer.start(10);

return a.exec();
}
*
*
*/


/*
//QTextBrowser 위젯(2)
// html파일은 QT -> Project바에서 Run에서 'workign directori'에 마우스 오른쪽 버튼\
show in exploler안에 만들어야함.

#include <QApplication>
#include <QTextBrowser>
#include <QUrl>

int main(int argc, char *argv[])
{
    QApplication a(argc,argv);

    QTextBrowser *tb = new QTextBrowser();
    tb -> setSource(QUrl("index.html"));
    tb->show();

    return a.exec();
}
*/


/*

//QPushButton위젯(2)
#include <QApplication>
#include <QPushButton>

int main(int argc,char *argv[])
{
    QApplication a(argc,argv);
    QPushButton *pushButton = new QPushButton("Push&Button",0);
    pushButton -> setCheckable(true);
    QObject::connect(pushButton,&QPushButton::toggled,
                     [&](bool flag){ qDebug()<< "toggled"; if(!flag) a.quit();});
    pushButton ->show();

    return a.exec();
}
*/


/*

//QRadioButton위젯-------------------------------------------------------
#include <QApplication>
#include "widget.h"
#include<QButtonGroup>
#include<QRadioButton>
int main(int argc,char **argv)
{
    QApplication a(argc,argv);
    QWidget *widget = new QWidget(0);
    QButtonGroup * bg=new QButtonGroup(widget); //버튼그룹 생성

    QRadioButton *rb1=new QRadioButton("Option &1",widget);
    rb1 -> move (10,10);
    bg -> addButton(rb1);

    QRadioButton *rb2=new QRadioButton("Option &2",widget);
    rb2 -> move (10,30);
    bg -> addButton(rb2);

    QRadioButton *rb3=new QRadioButton("Option &3",widget);
    rb3 -> move (10,50);
    bg -> addButton(rb3);

    QRadioButton *rb4=new QRadioButton("Option &4",widget);
    rb4 -> move (10,70);
    bg -> addButton(rb4);

    widget ->resize(140,110);
    widget -> show();

    return a.exec();
}

*/

/*

//QCheckBox위젯-----------------------------------------------------------

#include <QApplication>
#include "widget.h"
#include<QButtonGroup>
#include<QCheckBox>
#include <QLabel>

int main(int argc,char *argv[])
{
    QApplication a(argc,argv);

    QWidget *widget = new QWidget(0);
    QButtonGroup * bg=new QButtonGroup(widget); //버튼그룹 생성

    QLabel *label = new QLabel("0",widget);
    label -> move(10,10);

    QCheckBox *cb1=new QCheckBox("CHCHK &1",widget);
    cb1 -> move (10,30);
    bg -> addButton(cb1,1);

    QCheckBox *cb2=new QCheckBox("CHCHK &2",widget);
    cb2 -> move (10,50);
    bg -> addButton(cb2,2);

    QCheckBox *cb3=new QCheckBox("CHCHK &3",widget);
    cb3 -> move (10,70);
    bg -> addButton(cb3,3);

    QCheckBox *cb4=new QCheckBox("CHCHK &4",widget);
    cb4 -> move (10,90);
    bg -> addButton(cb4,4);

    bg->setExclusive(false);
    QObject::connect(bg,SIGNAL(buttonClicked(int)),label,SLOT(setNum(int)));

    widget ->resize(110,140);
    widget -> show();

    return a.exec();
}

*/


/*
//QSlider위젯---------------------------------------------------------------------

#include <QApplication>
#include <QSlider>
#include <QStyleFactory>
int main(int argc,char *argv[])
{
    QApplication a(argc,argv);

    QSlider *slider = new QSlider(Qt::Horizontal,0);
    //slider -> setOrientation(Qt::Horizontal);
    slider -> setTickPosition(QSlider::TicksAbove);
    slider -> setStyle(QStyleFactory::create("Fusion"));
    slider -> show();

    return a.exec();
}

*/

//QScrollBar위젯-------------------------------------------------------------

#include <QApplication>
#include <QScrollBar>
#include <QScrollArea>
#include <QLabel>

int main(int argc,char * argv[])
{
    QApplication a(argc,argv);
    QLabel *label = new QLabel("1234567890123456789012345678901234567890");
    QScrollArea* scrollArea = new QScrollArea;
    scrollArea -> setBackgroundRole(QPalette::Dark);
    scrollArea -> setWidget(label);
    scrollArea ->resize(60,30);
    scrollArea -> show();
    QScrollBar * slider = scrollArea -> horizontalScrollBar();
    slider -> setValue (slider->maximum());
    return a.exec();
}











