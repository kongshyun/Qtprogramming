#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QVector>
#include <QButtonGroup>
#include <QPushButton>
#include <QLabel>


class QLabel;
class QPushButton;
class QButtonGroup;

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
private:
    QLabel *m_label;
    QButtonGroup * buttonGroup;
    QString m_num1,m_op;
    bool m_isFirst;
    const qint32 WIDTH =4;
public slots:
    void click(int id);
};
#endif // WIDGET_H
