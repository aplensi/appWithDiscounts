#include "mainwindow.h"
#include "ui_mainwindow.h"

QStringList listOfNames;
QStringList listOfCPrice;
QStringList listOfNPrice;
QList<QImage> images;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->listWidget->setViewMode(QListWidget::IconMode);
}

MainWindow::~MainWindow()
{
    delete ui;

}

void connectToServer() {
    QTcpSocket socket;
    QHostAddress serverAddress("192.168.0.103");
    quint16 port = 1234;

    socket.connectToHost(serverAddress, port);

    if (!socket.waitForConnected(5000)) {
        qCritical() << "Connection failed!";
        return;
    }

    qDebug() << "Connected to server.";

    QByteArray data;
    while (socket.waitForReadyRead(5000)) {
        data.append(socket.readAll());
    }

    if (data.isEmpty()) {
        qCritical() << "No data received!";
        return;
    }

    QDataStream in(&data, QIODevice::ReadOnly);

    in >> listOfNames >> listOfCPrice >> listOfNPrice;

    qDebug() << "Received list1:" << listOfNames;
    qDebug() << "Received list2:" << listOfCPrice;
    qDebug() << "Received list3:" << listOfNPrice;


    int imageCount;
    in >> imageCount;

    qDebug() << "Received image count:" << imageCount;

    for (int i = 0; i < imageCount; ++i) {
        QByteArray byteArray;
        in >> byteArray;
        qDebug() << "Received byte array size:" << byteArray.size();
        QImage image;
        if (image.loadFromData(byteArray, "PNG")) {
            qDebug() << "Image loaded successfully.";
            images.append(image);
            QString fileName = QString("received_image_%1.png").arg(i + 1);
            if (image.save(fileName)) {
                qDebug() << "Image saved as" << fileName;
            } else {
                qCritical() << "Failed to save image" << fileName;
            }
        } else {
            qCritical() << "Failed to load image from data!";
        }
    }

    socket.disconnectFromHost();
}

void MainWindow::on_pushButton_clicked()
{
    ui->listWidget->clear();
    connectToServer();
    ui->label->setPixmap(QPixmap::fromImage(images[int(images.size()-1)]));
    for(int i = 0; i < listOfCPrice.size(); i++)
    {
        QListWidgetItem *item = new QListWidgetItem;
        item->setText("Название: " + listOfNames[i] + "\nЦена: " + listOfCPrice[i] + "\nНовая цена: " + listOfNPrice[i]);
        item->setIcon(QPixmap::fromImage(images[i]));
        ui->listWidget->setIconSize(QSize(80,80));
        ui->listWidget->addItem(item);
    }
    listOfNames.clear();
    listOfCPrice.clear();
    images.clear();
    listOfNPrice.clear();
}

