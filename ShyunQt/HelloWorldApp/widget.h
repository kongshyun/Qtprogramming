#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);//c++은 포인터에 null사용시 nullptr로
    ~Widget();
};
#endif // WIDGET_H
