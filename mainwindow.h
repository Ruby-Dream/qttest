#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QStringListModel>
#include <QStringList>
#include <QModelIndex>
#include <QMainWindow>
#include <QAbstractItemView>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_radioButton_clicked(bool checked);

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    QStringListModel *m;
    QStringList s;
};
#endif // MAINWINDOW_H
