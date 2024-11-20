#ifndef CHANGER_H
#define CHANGER_H

#include <QWidget>
#include <string>
#include <QtSql>
#include <QFileDialog>

namespace Ui {
class changer;
}

class changer : public QWidget
{
    Q_OBJECT

public:
    explicit changer(QWidget *parent = nullptr);
    ~changer();

private:
    Ui::changer *ui;

signals:
    void updateChanges();
public slots:
    void change(int ID);
private slots:
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
};

#endif // CHANGER_H
