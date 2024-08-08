#include "qteditor.h"
#include <QMenu>
#include <QAction>
#include <QMenuBar>
#include <QTextEdit>
#include <QFrame>
#include <QApplication>
#include <QKeySequence>
#include <QString>

#include <QToolBar>
#include <QFontComboBox>
#include <QDoubleSpinBox>

#include <QLabel>
#include <QStatusBar>
#include <QDockWidget>
#include <QMenu>
#include <QDockWidget>
#include <QMdiArea>
#include <QMdiSubWindow>

QtEditor::QtEditor(QWidget *parent): QMainWindow(parent)
{
    mdiArea= new QMdiArea(this);
    setCentralWidget(mdiArea);
#if 0
    QTextEdit *textedit = new QTextEdit(this);
    //setCentralWidget(textedit);
    mdiArea->addSubWindow(textedit);
#else
    QTextEdit *textedit = newFile();
#endif
    QMenuBar *menubar = new QMenuBar(this);
    setMenuBar(menubar);

    QWidget *w = new QWidget(this);
    QLabel *label=new QLabel("Dock Widget",w);
    QDockWidget *dock=new QDockWidget("Dock Widget",this);
    dock -> setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea);
    addDockWidget(Qt::RightDockWidgetArea,dock);
    dock->setWidget(w);

    //textedit=new QTextEdit(this);

  //  toolbarMenu ->addAction(dock -> toggleViewAction());
/*
    //Make New File
    QAction *newAct = new QAction (QIcon("new.png"),"&New",this);
    newAct ->setShortcut(tr("Ctrl+N"));
    newAct -> setStatusTip(tr("make new file"));
    connect(newAct,SIGNAL(triggered()),this,SLOT(newFile()));

    //Open File
    QAction *openAct = new QAction (QIcon("open.png"),"&Open",this);
    openAct ->setShortcut(tr("Ctrl+O"));
    openAct -> setStatusTip(tr("open a file"));
    connect(openAct,SIGNAL(triggered()),this,SLOT(openFile()));

    //Save File
    QAction *saveAct = new QAction (QIcon("save.png"),"&Save",this);
    saveAct -> setShortcut(tr("Ctrl+S"));
    saveAct -> setStatusTip(tr("save a file"));
    connect(saveAct,SIGNAL(triggered()),this,SLOT(saveFile()));

    //Save as File
    QAction *saveasAct = new QAction (QIcon("saveas.png"),"Save &as ...",this);
    saveasAct -> setShortcut(tr("Ctrl+A"));
    saveasAct -> setStatusTip(tr("save as file"));
    connect(saveasAct,SIGNAL(triggered()),this,SLOT(saveasFile()));

    //Print File
    QAction *printAct = new QAction (QIcon("print.png"),"&Print",this);
    printAct -> setShortcut(tr("Ctrl+P"));
    printAct -> setStatusTip(tr("print file"));
    connect(printAct,SIGNAL(triggered()),this,SLOT(printFile()));

    //Exit   -> quit 슬롯
    QAction *exitAct = new QAction (QIcon("exit.png"),"&Exit",this);
    exitAct -> setShortcut(tr("Ctrl+E"));
    exitAct -> setStatusTip(tr("EXIT"));
    connect(exitAct,SIGNAL(triggered()),qApp,SLOT(quit()));
*/
//-------------------액션의 쉬운 구현--------------------------------------------


    QAction *newAct = makeAction(":/images/new.png",tr("&New"),QKeySequence::New,tr("make new file"),this,SLOT(newFile()));
    QAction *openAct = makeAction(":/images/open.png",tr("&Open"),QKeySequence::New,tr("make new file"),this,SLOT(openFile()));
    QAction *saveAct = makeAction(":/images/save.png",tr("&Save"),QKeySequence::New, tr("make new file"),this,SLOT(saveFile()));
    QAction *saveasAct = makeAction(":/images/saveas.png",tr("Save &as ..."),QKeySequence::New,tr("save as file"),this,SLOT(saveasFile()));
    QAction *printAct = makeAction(":/images/print.png",tr("&Print"),QKeySequence::New,tr("print file"),this,SLOT(printFile()));
    QAction *exitAct = makeAction(":/images/exit.png",tr("&Exit"),QKeySequence::New,tr("Exit this program"),qApp,SLOT(quit()));

    QMenu *fileMenu = menubar -> addMenu("&File");
    fileMenu -> addAction(newAct);
    fileMenu -> addAction(openAct);
    fileMenu -> addAction(saveAct);
    fileMenu -> addAction(saveasAct);
    fileMenu -> addSeparator(); // 메뉴바의 분리선 그어줌.
    fileMenu -> addAction(printAct);
    fileMenu -> addAction(exitAct);

//--------------------Editmenu----------------------------------------------
    QAction *undoAct = makeAction(":/images/undo.png",tr("&Undo"),QKeySequence::New,tr("undo"),textedit,SLOT(undo()));
    QAction *redoAct = makeAction(":/images/redo.png",tr("&Redo"),QKeySequence::New,tr("redo"),textedit,SLOT(redo()));
    QAction *copyAct = makeAction(":/images/copy.png",tr("&Copy"),QKeySequence::New,tr("copy"),textedit,SLOT(copy()));
    QAction *cutAct = makeAction(":/images/cut.png",tr("Cu&t"),QKeySequence::New,tr("cut"),textedit,SLOT(cut()));
    QAction *pasteAct = makeAction(":/images/paste.png",tr("&Paste"),QKeySequence::New,tr("paste"),textedit,SLOT(paste()));
    QAction *zoominAct = makeAction(":/images/zoomin.png",tr("Zoom&In"),QKeySequence::New,tr("zoomin"),textedit,SLOT(zoomIn()));
    QAction *zoomoutAct = makeAction(":/images/zoomout.png",tr("Zoom&Out"),QKeySequence::New,tr("zoomout"),textedit,SLOT(zoomOut()));

    QMenu *editMenu = menubar -> addMenu("&Edit");
    editMenu -> addAction(undoAct);
    editMenu -> addAction(redoAct);
    editMenu -> addSeparator(); // 메뉴바의 분리선 그어줌.
    editMenu -> addAction(copyAct);
    editMenu -> addAction(cutAct);
    editMenu -> addAction(pasteAct);
    editMenu -> addSeparator(); // 메뉴바의 분리선 그어줌.
    editMenu -> addAction(zoominAct);
    editMenu -> addAction(zoomoutAct);

//-------toolBar----------------------------------------------------------------------------------

    QToolBar *fileToolBar = addToolBar("&File");
    fileToolBar -> setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    fileToolBar -> addAction(newAct);
    fileToolBar -> addAction(openAct);
    fileToolBar -> addAction(saveAct);
    fileToolBar -> addAction(saveasAct);
    fileToolBar -> addSeparator();
    fileToolBar -> addAction(printAct);
    fileToolBar -> addAction(exitAct);

    addToolBarBreak();


    QToolBar *editToolBar = addToolBar("&Edit");
    editToolBar-> setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    editToolBar -> addAction(undoAct);
    editToolBar -> addAction(redoAct);
    editToolBar -> addSeparator();
    editToolBar -> addAction(copyAct);
    editToolBar -> addAction(cutAct);
    editToolBar -> addAction(pasteAct);
    editToolBar -> addSeparator();
    editToolBar -> addAction(zoominAct);
    editToolBar -> addAction(zoomoutAct);

//------상태바추가-------
    QStatusBar *statusbar = statusBar();
    QLabel *statusLabel=new QLabel(tr("Qt Editor"),statusbar);
    statusLabel -> setObjectName("StatusLabel");
    statusbar->addPermanentWidget(statusLabel);
    statusbar ->showMessage("started",1500);
//---------------------
    fileToolBar -> setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    QMenu *windowMenu = menubar -> addMenu("&Window");
    QMenu *toolbarMenu = windowMenu -> addMenu("&Toolbar");
    toolbarMenu -> addAction(fileToolBar->toggleViewAction());
    toolbarMenu ->addAction(dock -> toggleViewAction());


    QFontComboBox *fontComboBox = new QFontComboBox(this);
    connect(fontComboBox,SIGNAL(currentFontChanged(QFont)), textedit,SLOT(serCurrentFont(QFont)));
    QDoubleSpinBox *sizeSpinBox=new QDoubleSpinBox(this);
    connect(sizeSpinBox,SIGNAL(valueChanged(double)),textedit,SLOT(setFontPointSize(qreal)));

    addToolBarBreak();

    QToolBar *formatToolbar = addToolBar("&Format");

    formatToolbar ->addSeparator();
    formatToolbar -> addWidget(fontComboBox);
    formatToolbar -> addWidget(sizeSpinBox);

//-----------------------------------------------------------------------------------------
}

template<typename T>
QAction *QtEditor::makeAction(QString icon,QString text,T shortCut,QString toolTip, QObject* recv,const char* slot)
{
    QAction *act=new QAction(text,this);
    if(icon.length())
        act ->setIcon(QIcon(icon));
    QKeySequence keySequence(shortCut);
    act ->setShortcut(keySequence);
    act ->setStatusTip(toolTip);
    act ->setToolTip(toolTip);
    connect(act,SIGNAL(triggered()),recv,slot);
    return act;
}

/*
template<typename T,typename Functor>
QAction *QtEditor::makeAction(QString 0icon,QString text,T shortCut,QString toolTip, QObject* recv,Functor lambda)
{
    QAction *act=new QAction(text,this);
    if(icon.length())
        act ->setIcon(QIcon(icon));
    QKeySequence keySequence(shortCut);
    act ->setShortcut(keySequence);
    act ->setStatusTip(toolTip);
    act ->setToolTip(toolTip);
    connect(act,&QAction::triggered,this,lambda);
    return act;
}*/

QtEditor::~QtEditor() {
    //delete textEdit;
}

QTextEdit *QtEditor::newFile(){
    qDebug("Make New File");
    QTextEdit *textedit=new QTextEdit;
    mdiArea -> addSubWindow(textedit);
    textedit -> show();
    return textedit;
}/*
void QtEditor::newFile()
{
    qDebug("Make New File");

}*/

void QtEditor::openFile()
{
    qDebug("open a File");
}

void QtEditor::saveFile()
{
    qDebug("save a File");
}


void QtEditor::saveasFile()
{
    qDebug("save as File");
}


void QtEditor::exitFile()
{
    qDebug("exit File");
}

void QtEditor::printFile()
{
    qDebug("print File");
}
void QtEditor::Cat()
{
    qDebug("print File");
}

void QtEditor::redo()
{
    textEdit->redo();
}


void QtEditor::undo()
{
    textEdit->undo();
}
void QtEditor::copy()
{
    textEdit->copy();
}

void QtEditor::cut()
{
    textEdit->cut();
}

void QtEditor::paste()
{
    textEdit->paste();
}

void QtEditor::zoomIn()
{
    textEdit->zoomIn();
}

void QtEditor::zoomOut()
{
    textEdit->zoomOut();
}



