#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidget>
#include <QListWidgetItem>
#include <QLabel>
#include <additemtolist.h>
#include <changer.h>
#include <QPixmap>
#include <QTcpServer>
#include <QTcpSocket>
#include <QDebug>
#include <QDataStream>
#include <QImage>
#include <QBuffer>
#include <QThread>
#include <qzxing/src/QZXing.h>
#include <qzxing/src/zxing/zxing/ZXing.h>
#include <qzxing/src/QZXing.h>
#include "QZXing.h"


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
    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_listWidget_itemClicked(QListWidgetItem *item);

    void on_pushButton_5_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    QListWidget listOfProducts;
    QStringList listOfID;
    addItemToList addITL;
    changer change;
signals:
    void createItem0();
    void changeItem(int ID);

public slots:
    void updateTable();
};
#endif // MAINWINDOW_H
