/********************************************************************************
** Form generated from reading UI file 'additemtolist.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDITEMTOLIST_H
#define UI_ADDITEMTOLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addItemToList
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QLabel *label_4;

    void setupUi(QWidget *addItemToList)
    {
        if (addItemToList->objectName().isEmpty())
            addItemToList->setObjectName("addItemToList");
        addItemToList->resize(440, 206);
        verticalLayout = new QVBoxLayout(addItemToList);
        verticalLayout->setObjectName("verticalLayout");
        frame = new QFrame(addItemToList);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(270, 150, 80, 24));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(20, 10, 171, 24));
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(210, 10, 49, 16));
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(80, 40, 111, 24));
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 40, 61, 16));
        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(80, 70, 111, 24));
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 70, 61, 16));
        lineEdit_3 = new QLineEdit(frame);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(92, 100, 101, 24));
        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 100, 71, 16));

        verticalLayout->addWidget(frame);


        retranslateUi(addItemToList);

        QMetaObject::connectSlotsByName(addItemToList);
    } // setupUi

    void retranslateUi(QWidget *addItemToList)
    {
        addItemToList->setWindowTitle(QCoreApplication::translate("addItemToList", "\320\241\320\276\320\267\320\264\320\260\320\275\320\270\320\265 \320\260\320\272\321\206\320\270\320\270", nullptr));
        pushButton->setText(QCoreApplication::translate("addItemToList", "\320\224\320\276\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("addItemToList", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\270\320\267\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("addItemToList", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_3->setText(QCoreApplication::translate("addItemToList", "\320\246\320\265\320\275\320\260", nullptr));
        label_4->setText(QCoreApplication::translate("addItemToList", "\320\235\320\276\320\262\320\260\321\217 \321\206\320\265\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addItemToList: public Ui_addItemToList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDITEMTOLIST_H
