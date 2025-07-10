/********************************************************************************
** Form generated from reading UI file 'addwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDWINDOW_H
#define UI_ADDWINDOW_H

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

class Ui_AddWindow
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit_m;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_h;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_t;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AddWindow)
    {
        if (AddWindow->objectName().isEmpty())
            AddWindow->setObjectName("AddWindow");
        AddWindow->resize(400, 204);
        gridLayout = new QGridLayout(AddWindow);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(AddWindow);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        lineEdit_m = new QLineEdit(AddWindow);
        lineEdit_m->setObjectName("lineEdit_m");

        verticalLayout->addWidget(lineEdit_m);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_2 = new QLabel(AddWindow);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2);

        lineEdit_h = new QLineEdit(AddWindow);
        lineEdit_h->setObjectName("lineEdit_h");

        verticalLayout_2->addWidget(lineEdit_h);


        gridLayout->addLayout(verticalLayout_2, 1, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_3 = new QLabel(AddWindow);
        label_3->setObjectName("label_3");

        verticalLayout_3->addWidget(label_3);

        lineEdit_t = new QLineEdit(AddWindow);
        lineEdit_t->setObjectName("lineEdit_t");

        verticalLayout_3->addWidget(lineEdit_t);


        gridLayout->addLayout(verticalLayout_3, 2, 0, 1, 1);

        buttonBox = new QDialogButtonBox(AddWindow);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 1);


        retranslateUi(AddWindow);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, AddWindow, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, AddWindow, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(AddWindow);
    } // setupUi

    void retranslateUi(QDialog *AddWindow)
    {
        AddWindow->setWindowTitle(QCoreApplication::translate("AddWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AddWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\274\320\276\320\264\320\265\320\273\321\214:", nullptr));
        label_2->setText(QCoreApplication::translate("AddWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\276\320\261\321\212\321\221\320\274 HDD:", nullptr));
        label_3->setText(QCoreApplication::translate("AddWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\202\320\270\320\277 \320\277\321\200\320\276\321\206\320\265\321\201\321\201\320\276\321\200\320\260:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddWindow: public Ui_AddWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDWINDOW_H
