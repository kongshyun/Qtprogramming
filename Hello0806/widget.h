/*

//QRadioButton 위젯-------------------------------------

#ifndef WIDGET_H
#define WIDGET_H
#include <QRadioButton>
#include <QButtonGroup>
#include <QWidget>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    QRadioButton *radioButton[4];
    QButtonGroup *buttonGroup;
};
#endif // WIDGET_H

*/



//QCheckBox위젯-----------------------------------------------------------
#ifndef WIDGET_H
#define WIDGET_H
#include <QCheckBox>
#include <QButtonGroup>
#include <QWidget>
#include <QLabel>


class QCheckBox;
class QButtonGroup;

class Widget : public QWidget
{
    Q_OBJECT
private:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    QCheckBox *checkBox[4];
    QButtonGroup *buttonGroup;
    QLabel *label;

public slots:
    void selectButton(int id);

};

#endif //WIDGET_H

