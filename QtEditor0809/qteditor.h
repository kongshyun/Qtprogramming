#ifndef QTEDITOR_H
#define QTEDITOR_H

#include <QMainWindow>
#include <QTextEdit>
#include <QKeySequence>
#include <QString>
#include <QToolBar>
#include <QMenu>
#include <QMdiArea>

class QMdiArea;
class QAction;
class QTextEdit;

class QtEditor : public QMainWindow
{
    Q_OBJECT
    QMdiArea *mdiArea;

private:
    QTextEdit *textEdit;
    QTextEdit *textedit;
    //QMenu *alignMenu;
    template<typename T>
    QAction *makeAction(QString icon,QString text,T shortCut,QString toolTip, QObject* recv,const char* slot);

    template<typename T, typename Functor>
    QAction *makeAction(QString icon, QString text,T shortCut, QString toolTip,QObject* recv, Functor lambda);

public slots:
    QTextEdit *newFile();
    //void newFile();
    void openFile();
    void saveFile();
    void saveasFile();
    void printFile();
    void exitFile();
    void undo();
    void redo();
    void copy();
    void cut();
    void paste();
    void zoomIn();
    void zoomOut();



public:
    QtEditor(QWidget *parent = nullptr);

    ~QtEditor();



};
#endif // QTEDITOR_H
