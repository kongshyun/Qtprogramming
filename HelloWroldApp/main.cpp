#include <QApplication>
#include "widget.h"

class Calculator{
public:
    Calculator(int num1=0,char op=' ',int num2=0)
        : num1(num1),op(op),num2(num2){}
    void input(){ std::cin >> num1 >> op >> num2;}

    double doCalculate(){
        double result;
        switch(op){
            case'+':result =num1+num2;break;
            case'-':result =num1-num2;break;
            case'*':result =num1*num2;break;
            case'/':result =num1/(double)num2;break;
        }
        return result;
    }

    const char ButtonChar[16][2]={
        "7","8","9","/",
        "4","5","6","x",
        "1","2","3","-",
        "0","C","=","+", };

    label =new QLabel("0",this);
    label -> setGeometry(10,5,230,40);
    label -> setAlignment(Qt::AlignRight | Qt:: AlignVCenter);
    QPushButton *buttons[16];
    for(int y=0;y<WIDTH;y++){
        for(int x=0;x<WIDTH;x++){
            //QPushButton 생성자의 첫번째 인자로 문자열을 사용
            buttons[x+y*WIDTH]= new QPushButton(ButtonChar[x+y*WIDTH],this);
            buttons[x+y*WIDTH] -> setGeometry(5+60*x,50+60*y,60,60);
        }
    }
};

int main(int argc,char *argv[])
{
    QApplication a(argc,argv);

    Widget w;

    QLabel *label = new QLabel("<font size =20 >Hello,World!</font>",&w);
    label -> setGeometry(10,90,75,35);

    w.show();
    return a.exec();
}
