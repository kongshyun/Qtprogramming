#include "qteditor.h"
#include <QTextEdit>
#include <QMenuBar>
#include <QMenu>
#include <QAction>

QtEditor::QtEditor(QWidget *parent) : QMainWindow(parent)
{
    //1 - 텍스트 쓸수있게 위젯 추가
    QTextEdit *textedit = new QTextEdit(this);
    setCentralWidget(textedit);

    //2 - 메뉴바 추가
    QMenuBar *menubar = new QMenuBar(this);
    setMenuBar(menubar);

    //3 - 메뉴바에 메뉴추가 (file)
    QMenu *fileMenu = menubar -> addMenu("&File");

    //4 -
}

QtEditor::~QtEditor() {}
