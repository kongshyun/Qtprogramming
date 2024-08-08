#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QVector>

class QLabel;
class QPushButton;

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);

    ~Widget();

private:
    QLabel *m_label;
    QVector < QPushButton*> m_buttons; //헝가리안 표기법 m_buttons Member타입
    QString m_num1,m_op;
    bool m_isFirst; // 다시 첨부터 숫자 넣을때를 위한 변수
    const qint32 WIDTH = 4; // define으로 쓰면 메모리를 안씀, const는 메모리는 먹지만 변수형은 알수있음. 에러 처리를 위해서는 const가 좋음. const를 권장
public slots:
    void setNum();
    void setOp();

};
#endif // WIDGET_H
