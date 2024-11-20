#include "mainwindow.h"
#include "ui_mainwindow.h"

int actItem = -1;
QStringList listOfNames;
QStringList listOfCPrice;
QStringList listOfNPrice;
QStringList listOfIco;

QImage generateQRCode(const QString &text, int size = 200) {
    QZXing encoder;
    QImage qrImage = encoder.encodeData(text);
    return qrImage.scaled(size, size, Qt::KeepAspectRatio, Qt::SmoothTransformation);
}

bool saveImage(const QImage &image, const QString &filePath) {
    return image.save(filePath);
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->listWidget->setViewMode(QListWidget::IconMode);

    QString text = "Hello, QR Code!";

    QImage qrCode = generateQRCode(text);
    QString filePath = "qrcode.png";
    saveImage(qrCode, filePath);

    connect(this, &MainWindow::createItem0, &addITL, &addItemToList::createItem1);
    connect(&addITL, &addItemToList::updateTable, this, &MainWindow::updateTable);
    connect(this, &MainWindow::changeItem, &change, &changer::change);
    connect(&change, &changer::updateChanges, this, &MainWindow::updateTable);

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("mydatabase.db");
    db.open();

    QSqlQuery query;

    query.exec("CREATE TABLE IF NOT EXISTS Products(ID INTEGER PRIMARY KEY, Name TEXT, cPrice INT, nPrice INT, Icon TEXT)");

    query.exec("SELECT Name FROM Products");
    while (query.next()) {
        listOfNames << query.value(0).toString();
    }
    query.exec("SELECT cPrice FROM Products");
    while (query.next()) {
        listOfCPrice << query.value(0).toString();
    }
    query.exec("SELECT nPrice FROM Products");
    while (query.next()) {
        listOfNPrice << query.value(0).toString();
    }
    query.exec("SELECT Icon FROM Products");
    while (query.next()) {
        listOfIco << query.value(0).toString();
    }
    query.exec("SELECT ID FROM Products");
    while (query.next()) {
        listOfID << query.value(0).toString();
    }

    for(int i = 0; i < listOfCPrice.size(); i++)
    {
        QListWidgetItem *item = new QListWidgetItem;
        item->setText("Название: " + listOfNames[i] + "\nЦена: " + listOfCPrice[i] + "\nНовая цена: " + listOfNPrice[i]);
        QString pathToIco = "debug/Images/" + listOfIco[i];
        item->setIcon(QPixmap(pathToIco));
        ui->listWidget->setIconSize(QSize(150,150));
        ui->listWidget->addItem(item);
    }

    qDebug() << listOfID;

    db.close();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_3_clicked()
{
    emit createItem0();
}

void MainWindow::updateTable()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("mydatabase.db");
    db.open();
    QSqlQuery query;
    ui->listWidget->clear();
    listOfCPrice.clear();
    listOfNPrice.clear();
    listOfIco.clear();
    listOfNames.clear();
    listOfID.clear();
    query.exec("SELECT Name FROM Products");
    while (query.next()) {
        listOfNames << query.value(0).toString();
    }
    query.exec("SELECT cPrice FROM Products");
    while (query.next()) {
        listOfCPrice << query.value(0).toString();
    }
    query.exec("SELECT nPrice FROM Products");
    while (query.next()) {
        listOfNPrice << query.value(0).toString();
    }
    query.exec("SELECT Icon FROM Products");
    while (query.next()) {
        listOfIco << query.value(0).toString();
    }
    query.exec("SELECT ID FROM Products");
    while (query.next()) {
        listOfID << query.value(0).toString();
    }
    for(int i = 0; i < listOfCPrice.size(); i++)
    {
        QListWidgetItem *item = new QListWidgetItem;
        item->setText("Название: " + listOfNames[i] + "\nЦена: " + listOfCPrice[i] + "\nНовая цена: " + listOfNPrice[i]);
        QString pathToIco = "debug/Images/" + listOfIco[i];
        item->setIcon(QPixmap(pathToIco));
        ui->listWidget->setIconSize(QSize(150,150));
        ui->listWidget->addItem(item);
    }
}


void MainWindow::on_pushButton_4_clicked()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("mydatabase.db");
    db.open();

    QSqlQuery query;

    if(actItem != -1)
    {
        query.prepare("DELETE FROM Products WHERE ID = :index");
        query.bindValue(":index", listOfID[actItem].toInt());
        if (!query.exec()) {
            qDebug() << "Ошибка при выполнении SQL-запроса:" << query.lastError().text();
        } else {
            qDebug() << "Строка с индексом" << actItem + 1 << "была успешно удалена";
        }
        ui->listWidget->clear();
        listOfCPrice.clear();
        listOfNPrice.clear();
        listOfIco.clear();
        listOfNames.clear();
        listOfID.clear();
        query.exec("SELECT Name FROM Products");
        while (query.next()) {
            listOfNames << query.value(0).toString();
        }
        query.exec("SELECT cPrice FROM Products");
        while (query.next()) {
            listOfCPrice << query.value(0).toString();
        }
        query.exec("SELECT nPrice FROM Products");
        while (query.next()) {
            listOfNPrice << query.value(0).toString();
        }
        query.exec("SELECT Icon FROM Products");
        while (query.next()) {
            listOfIco << query.value(0).toString();
        }
        query.exec("SELECT ID FROM Products");
        while (query.next()) {
            listOfID << query.value(0).toString();
        }
        for(int i = 0; i < listOfCPrice.size(); i++)
        {
            QListWidgetItem *item = new QListWidgetItem;
            item->setText("Название: " + listOfNames[i] + "\nЦена: " + listOfCPrice[i] + "\nНовая цена: " + listOfNPrice[i]);
            QString pathToIco = "debug/Images/" + listOfIco[i];
            item->setIcon(QPixmap(pathToIco));
            ui->listWidget->setIconSize(QSize(150,150));
            ui->listWidget->addItem(item);
        }
        ui->listWidget->clearSelection();
    }
}


void MainWindow::on_listWidget_itemClicked(QListWidgetItem *item)
{
    actItem = ui->listWidget->currentRow();
    qDebug() << actItem;
}


void MainWindow::on_pushButton_5_clicked()
{
    if(actItem != -1)
    {
        emit changeItem(listOfID[actItem].toInt());
    }
}

void sendStringListsAndImages(QTcpSocket *clientSocket) {

    // Создаем список изображений
    QList<QImage> images;
    for(QString st : listOfIco)
    {
        images.append(QImage("debug/Images/"+st));
    }
    images.append(QImage("qrcode.png"));
    // Подготовка данных для отправки
    QByteArray block;
    QDataStream out(&block, QIODevice::WriteOnly);
    out << listOfNames << listOfCPrice << listOfNPrice;
    out << int(images.size());

    qDebug() << listOfNames << "\n" << listOfCPrice << "\n" << listOfNPrice << "\n" << images.size();
    for (const QImage &image : images) {
        QByteArray byteArray;
        QBuffer buffer(&byteArray);
        buffer.open(QIODevice::WriteOnly);
        if (image.save(&buffer, "PNG")) {
            qDebug() << "Image saved to buffer, size:" << byteArray.size();
            out << byteArray;
        } else {
            qCritical() << "Failed to save image to buffer!";
            clientSocket->disconnectFromHost();
            return;
        }
    }

    qDebug() << "Total data size to be sent:" << block.size();

    clientSocket->write(block);
    clientSocket->flush();
    clientSocket->waitForBytesWritten();
    qDebug() << "Data sent to client.";
}

void setupServer() {
    QTcpServer *tcpServer = new QTcpServer();

    QHostAddress ipAddress("192.168.0.103");
    quint16 port = 1234;

    if (!tcpServer->listen(ipAddress, port)) {
        qCritical() << "Server could not start!";
    } else {
        qDebug() << "Server started on IP:" << ipAddress.toString() << ", Port:" << port;

        QObject::connect(tcpServer, &QTcpServer::newConnection, [tcpServer]() {
            QTcpSocket *clientSocket = tcpServer->nextPendingConnection();
            if (clientSocket) {
                qDebug() << "New connection from:" << clientSocket->peerAddress().toString();
                sendStringListsAndImages(clientSocket);
                clientSocket->disconnectFromHost();
            }
        });
    }
}


void MainWindow::on_pushButton_clicked()
{
    setupServer();
}

