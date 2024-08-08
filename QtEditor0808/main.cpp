#include "qteditor.h"

#include <QApplication>
#include <QFrame>
#include <QTextEdit>
#include <QKeySequence>
#include <QString>
#include <QToolBar>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtEditor w;
    w.resize(600,400);
    w.show();
    return a.exec();
}
