#ifndef ADDITEMTOLIST_H
#define ADDITEMTOLIST_H

#include <QWidget>
#include <QFileDialog>
#include <string>
#include <QtSql>

namespace Ui {
class addItemToList;
}

class addItemToList : public QWidget
{
    Q_OBJECT

public:
    explicit addItemToList(QWidget *parent = nullptr);
    ~addItemToList();

private:
    Ui::addItemToList *ui;

signals:
    void updateTable();
public slots:
    void createItem1();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
};

#endif // ADDITEMTOLIST_H
