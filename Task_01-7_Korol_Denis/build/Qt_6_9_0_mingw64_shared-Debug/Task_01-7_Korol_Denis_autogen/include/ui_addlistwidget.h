/********************************************************************************
** Form generated from reading UI file 'addlistwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDLISTWIDGET_H
#define UI_ADDLISTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddListWidget
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit_M;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_H;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_T;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AddListWidget)
    {
        if (AddListWidget->objectName().isEmpty())
            AddListWidget->setObjectName("AddListWidget");
        AddListWidget->resize(400, 204);
        gridLayout = new QGridLayout(AddListWidget);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(AddListWidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        lineEdit_M = new QLineEdit(AddListWidget);
        lineEdit_M->setObjectName("lineEdit_M");

        verticalLayout->addWidget(lineEdit_M);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_2 = new QLabel(AddListWidget);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2);

        lineEdit_H = new QLineEdit(AddListWidget);
        lineEdit_H->setObjectName("lineEdit_H");

        verticalLayout_2->addWidget(lineEdit_H);


        gridLayout->addLayout(verticalLayout_2, 1, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_3 = new QLabel(AddListWidget);
        label_3->setObjectName("label_3");

        verticalLayout_3->addWidget(label_3);

        lineEdit_T = new QLineEdit(AddListWidget);
        lineEdit_T->setObjectName("lineEdit_T");

        verticalLayout_3->addWidget(lineEdit_T);


        gridLayout->addLayout(verticalLayout_3, 2, 0, 1, 1);

        buttonBox = new QDialogButtonBox(AddListWidget);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 1);


        retranslateUi(AddListWidget);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, AddListWidget, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, AddListWidget, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(AddListWidget);
    } // setupUi

    void retranslateUi(QDialog *AddListWidget)
    {
        AddListWidget->setWindowTitle(QCoreApplication::translate("AddListWidget", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AddListWidget", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\274\320\276\320\264\320\265\320\273\321\214:", nullptr));
        label_2->setText(QCoreApplication::translate("AddListWidget", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\276\320\261\321\214\320\265\320\274 HDD:", nullptr));
        label_3->setText(QCoreApplication::translate("AddListWidget", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\202\320\270\320\277 \320\277\321\200\320\276\321\206\320\265\321\201\321\201\320\276\321\200\320\260:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddListWidget: public Ui_AddListWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDLISTWIDGET_H
