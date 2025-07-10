#include "addwindow.h"
#include "ui_addwindow.h"

#include <QMessageBox>

AddWindow::AddWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddWindow)
{
    ui->setupUi(this);
}

AddWindow::~AddWindow()
{
    delete ui;
}


void AddWindow::on_buttonBox_accepted()
{
    if(ui->lineEdit_m->text() == nullptr || ui->lineEdit_h->text() == nullptr || ui->lineEdit_t->text() == nullptr){
        QMessageBox::about(this, "Ввод нового элемента", "Остались пустые поля\nНичего добавлено не будет");
    }
    else{
        emit textEntered(ui->lineEdit_m->text(), (ui->lineEdit_h->text()).toDouble(), ui->lineEdit_t->text());
        close();
    }
}
