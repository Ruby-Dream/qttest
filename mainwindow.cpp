#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QListView *l=ui->listView;
    m=new QStringListModel(this);
    s<<"1"<<"2"<<"3";
    m->setStringList(s);
    l->setModel(m);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    m->insertRow(m->rowCount());
    QModelIndex i=m->index(m->rowCount()-1,0);
    m->setData(i,"123");
    ui->listView->setCurrentIndex(i);

}


void MainWindow::on_radioButton_clicked(bool checked)
{
    if(checked){
        ui->listView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    }
    else{
        ui->listView->setEditTriggers(QAbstractItemView::DoubleClicked);
    }
}

