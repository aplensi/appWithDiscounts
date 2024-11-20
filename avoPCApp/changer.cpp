#include "changer.h"
#include "ui_changer.h"

QString name;
QString cprice;
QString nprice;
QString ico;
QString imagePath1;
QSqlDatabase db1;
int index;


changer::changer(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::changer)
{
    ui->setupUi(this);
    ui->label->setFixedSize(128, 128);
}

changer::~changer()
{
    delete ui;
}

void changer::change(int ID)
{
    db1 = QSqlDatabase::addDatabase("QSQLITE");
    db1.setDatabaseName("mydatabase.db");
    db1.open();

    QSqlQuery query;
    query.prepare("SELECT cPrice FROM Products WHERE ID = :index");
    query.bindValue(":index", ID);
    query.exec();
    while (query.next()) {
        cprice = query.value(0).toString();
    }
    query.prepare("SELECT Name FROM Products WHERE ID = :index");
    query.bindValue(":index", ID);
    query.exec();
    while (query.next()) {
        name = query.value(0).toString();
    }
    query.prepare("SELECT nPrice FROM Products WHERE ID = :index");
    query.bindValue(":index", ID);
    query.exec();
    while (query.next()) {
        nprice = query.value(0).toString();
    }
    query.prepare("SELECT Icon FROM Products WHERE ID = :index");
    query.bindValue(":index", ID);
    query.exec();
    while (query.next()) {
        ico = query.value(0).toString();
    }
    ui->lineEdit->setText(name);
    ui->lineEdit_2->setText(cprice);
    ui->lineEdit_3->setText(nprice);
    QPixmap image("debug/Images/" + ico);
    qDebug() << name;
    qDebug() << cprice;
    qDebug() << nprice;
    qDebug() << ico;
    ui->label->setPixmap(image.scaled(ui->label->size(), Qt::KeepAspectRatio,Qt::SmoothTransformation));
    this->show();
    index = ID;
}

void changer::on_pushButton_2_clicked()
{
    imagePath1 = QFileDialog::getOpenFileName(this, tr("Выберите изображение"), "", tr("Изображения (*.png *.jpg *.bmp)"));
    QPixmap image(imagePath1);
    ui->label->setPixmap(image.scaled(ui->label->size(), Qt::KeepAspectRatio,Qt::SmoothTransformation));
}


void changer::on_pushButton_clicked()
{
    db1 = QSqlDatabase::addDatabase("QSQLITE");
    db1.setDatabaseName("mydatabase.db");
    db1.open();

    QSqlQuery query;
    query.prepare("UPDATE Products SET cPrice = :newValue WHERE ID = :index");
    query.bindValue(":index", index);
    query.bindValue(":newValue", ui->lineEdit_2->text().toInt());
    query.exec();
    query.prepare("UPDATE Products SET Name = :newValue WHERE ID = :index");
    query.bindValue(":index", index);
    query.bindValue(":newValue", ui->lineEdit->text());
    query.exec();
    query.prepare("UPDATE Products SET nPrice = :newValue WHERE ID = :index");
    query.bindValue(":index", index);
    query.bindValue(":newValue", ui->lineEdit_3->text().toInt());
    query.exec();
    query.prepare("UPDATE Products SET Icon = :newValue WHERE ID = :index");
    query.bindValue(":index", index);
    query.bindValue(":newValue", QFileInfo(imagePath1).fileName());
    query.exec();
    QString imagesFolder = QDir(QCoreApplication::applicationDirPath()).filePath("Images");
    QDir().mkpath(imagesFolder);
    QString imageName = QFileInfo(imagePath1).fileName();
    QString destinationPath = QDir(imagesFolder).filePath(imageName);
    if (QFile::copy(imagePath1, destinationPath)) {
        qDebug() << "Изображение успешно сохранено в:" << destinationPath;
    } else {
        qDebug() << "Ошибка при сохранении изображения";
    }
    emit updateChanges();
    this->close();
}

