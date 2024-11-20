#include "additemtolist.h"
#include "ui_additemtolist.h"

QSqlDatabase db;
QString imagePath;

void cleanup()
{

}

addItemToList::addItemToList(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::addItemToList)
{
    ui->setupUi(this);
    ui->label->setFixedSize(128, 128);
}

addItemToList::~addItemToList()
{
    db.close();
    delete ui;
}

void addItemToList::createItem1()
{
    this->show();
}

void addItemToList::on_pushButton_clicked()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("mydatabase.db");

    if (!db.open()) {
        qDebug() << "Что-то сломалось!";
    }

    QSqlQuery sQuery;
    sQuery.exec("CREATE TABLE IF NOT EXISTS Products(ID INTEGER PRIMARY KEY, Name TEXT, cPrice INT, nPrice INT, Icon TEXT)");

    sQuery.prepare("INSERT INTO Products (Name, cPrice, nPrice, Icon) VALUES(:name, :cprice, :nprice, :ico)");
    sQuery.bindValue(":name", ui->lineEdit->text());
    sQuery.bindValue(":cprice", ui->lineEdit_2->text().toInt());
    sQuery.bindValue(":nprice", ui->lineEdit_3->text().toInt());
    sQuery.bindValue(":ico", QFileInfo(imagePath).fileName());

    if (!sQuery.exec()) {
        qDebug() << "Ошибка при добавлении значения в таблицу:" << sQuery.lastError().text();
    } else {
        qDebug() << "Значение успешно добавлено в таблицу!";
    }

    QString imagesFolder = QDir(QCoreApplication::applicationDirPath()).filePath("Images");
    QDir().mkpath(imagesFolder);
    QString imageName = QFileInfo(imagePath).fileName();
    QString destinationPath = QDir(imagesFolder).filePath(imageName);
    if (QFile::copy(imagePath, destinationPath)) {
        qDebug() << "Изображение успешно сохранено в:" << destinationPath;
    } else {
        qDebug() << "Ошибка при сохранении изображения";
    }

    emit updateTable();
    db.close();
    ui->label->clear();
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    this->close();
}



void addItemToList::on_pushButton_2_clicked()
{
    imagePath = QFileDialog::getOpenFileName(this, tr("Выберите изображение"), "", tr("Изображения (*.png *.jpg *.bmp)"));
    QPixmap image(imagePath);
    ui->label->setPixmap(image.scaled(ui->label->size(), Qt::KeepAspectRatio,Qt::SmoothTransformation));
}

