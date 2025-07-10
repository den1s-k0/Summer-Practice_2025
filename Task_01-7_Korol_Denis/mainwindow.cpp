#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "computers.h"
#include "addwindow.h"

#include <QListView>
#include <QStandardItemModel>
#include <QStandardItem>
#include <QMessageBox>
#include <QKeyEvent>
#include <QMenu>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget->setHorizontalHeaderLabels(QStringList() << "Model" << "HDD volume" << "Processor type");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    int N;
    Computers* A = nullptr;
    int count;
    GetData("Task_01-7_READ.txt", A, count);

    if(ui->lineEdit_1_1->text() == nullptr){
        QMessageBox::about(this, "Ввод N", "Поле пусто\nНичего выведено не будет");
        N = 0;
    }
    else{
        if((ui->lineEdit_1_1->text()).toInt() > count){
            ui->lineEdit_1_1->clear();
            QMessageBox::about(this, "Ввод N", "Число введенное вами превышает количество моделей\nБудет выведена информация о всех имеющихся компьютерах");
            N = count;
            ui->lineEdit_1_1->clear();
        }
        else{
            if((ui->lineEdit_1_1->text()).toInt() < 0){
                QMessageBox::about(this, "Ввод N", "Неверный ввод\nНичего выведено не будет\nВведите число больше 0");
                ui->lineEdit_1_1->clear();
                N = 0;
            }
            else{
                N = (ui->lineEdit_1_1->text()).toInt();
                ui->lineEdit_1_1->clear();
            }
        }
    }
    ShowListView(ui->listView, A, N);
    ShowListWidget(ui->listWidget, A, N);
    ShowTableWidget(ui->tableWidget, A, N);
    if(A) delete[] A;
}


void MainWindow::on_actionQListView_triggered()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_actionQListWidget_triggered()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_actionQTableWidget_triggered()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_actionMain_triggered()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_actionExit_triggered()
{
    QMessageBox::StandardButton close1 =  QMessageBox::question(this, "Закрытие программы", "Вы действительно хотите закрыть программу?",
                                                               QMessageBox::Yes | QMessageBox::No);
    if(close1 == QMessageBox::Yes)
        QApplication::quit();
    else {}
}


void MainWindow::on_pushButton_2_1_clicked()
{
    AddWindow *Window = new AddWindow(this);
    connect(Window, &AddWindow::textEntered, this, &MainWindow::receiveListText);
    Window->exec();
}

void MainWindow::receiveListText(QString model, qreal hdd, QString type) {
    QString text = QString("Model: %1 | HDD volume: %2 | Processor type: %3")
    .arg(model)
        .arg(hdd)
        .arg(type);
    ui->listWidget->addItem(text);
    ui->listWidget->clear();
    ui->tableWidget->setRowCount(0);
    QStandardItemModel* mod = qobject_cast<QStandardItemModel*>(ui->listView->model());
    if (mod) {
        mod->removeRows(0, mod->rowCount());
    }

    PutData("Task_01-7_READ.txt", Computers (model, hdd, type));
    QMessageBox::about(this, "Добавление", "Элемент добавлен");

}

void MainWindow::on_pushButton_2_2_clicked()
{
    if(ui->listWidget->currentRow() == -1){
        QMessageBox::about(this, "Удаление элемента", "Никакой элемент не выбран\nНичего удалено не будет");
    }
    else{
        int row = ui->listWidget->currentRow();
        QListWidgetItem *item = ui->listWidget->item(row);
        DeleteData("Task_01-7_READ.txt", item->text());
        delete ui->listWidget->takeItem(row);
        Computers* A = nullptr;
        int count;
        GetData("Task_01-7_READ.txt", A, count);
        ShowListView(ui->listView, A, count);
        ShowListWidget(ui->listWidget, A, count);
        ShowTableWidget(ui->tableWidget, A, count);
        if(A) delete[] A;
    }
}


void MainWindow::on_pushButton_2_3_clicked()
{
    ui->listWidget->sortItems(Qt::AscendingOrder);
}


void MainWindow::on_pushButton_2_4_clicked()
{
    ShellSortListWidget(ui->listWidget);
}


void MainWindow::on_pushButton_3_1_clicked()
{
    AddWindow *Window = new AddWindow(this);
    connect(Window, &AddWindow::textEntered, this, &MainWindow::receiveTableText);
    Window->exec();
}

void MainWindow::receiveTableText(QString model, qreal hdd, QString type) {
    int row = ui->tableWidget->currentRow();
    ui->tableWidget->setItem(row, 0, new QTableWidgetItem(model));
    ui->tableWidget->setItem(row, 1, new QTableWidgetItem(QString::number(hdd)));
    ui->tableWidget->setItem(row, 2, new QTableWidgetItem(type));
    PutData("Task_01-7_READ.txt", Computers (model, hdd, type));
    QMessageBox::about(this, "Добавление", "Элемент добавлен");
    ui->listWidget->clear();
    ui->tableWidget->setRowCount(0);
    QStandardItemModel* mod = qobject_cast<QStandardItemModel*>(ui->listView->model());
    if (mod) {
        mod->removeRows(0, mod->rowCount());
    }
}

void MainWindow::on_pushButton_3_2_clicked()
{
    if(ui->tableWidget->currentRow() == -1){
        QMessageBox::about(this, "Удаление элемента", "Никакой элемент не выбран\nНичего удалено не будет");
    }
    else{
        QString model = ui->tableWidget->item(ui->tableWidget->currentRow(), 0)->text();
        QString hdd = ui->tableWidget->item(ui->tableWidget->currentRow(), 1)->text();
        QString type = ui->tableWidget->item(ui->tableWidget->currentRow(), 2)->text();
        DeleteData("Task_01-7_READ.txt", model, hdd, type);
        ui->tableWidget->removeRow(ui->tableWidget->currentRow());
        Computers* A = nullptr;
        int count;
        GetData("Task_01-7_READ.txt", A, count);
        ShowListView(ui->listView, A, count);
        ShowListWidget(ui->listWidget, A, count);
        ShowTableWidget(ui->tableWidget, A, count);
        if(A) delete[] A;
    }
}

void MainWindow::keyPressEvent(QKeyEvent *event){
    if((event->key() == Qt::Key_Delete || event->key() == Qt::Key_Backspace) && ui->stackedWidget->currentIndex() == 2){
        on_pushButton_2_2_clicked();
    }
    if((event->key() == Qt::Key_Delete || event->key() == Qt::Key_Backspace) && ui->stackedWidget->currentIndex() == 3){
        on_pushButton_3_2_clicked();
    }
    if(event->key() == Qt::Key_Return){
        on_pushButton_clicked();
    }
    if(event->key() == Qt::Key_1){
        ui->stackedWidget->setCurrentIndex(1);
    }
    if(event->key() == Qt::Key_2){
        ui->stackedWidget->setCurrentIndex(2);
    }
    if(event->key() == Qt::Key_3){
        ui->stackedWidget->setCurrentIndex(3);
    }
    if(event->key() == Qt::Key_0 || event->key() == Qt::Key_Home){
        ui->stackedWidget->setCurrentIndex(0);
    }
    if(event->key() == Qt::Key_Plus || event->key() == Qt::Key_Equal || event->key() == Qt::Key_Greater){
        int i = ui->stackedWidget->currentIndex() + 1;
        if(i > 3) i = 0;
        ui->stackedWidget->setCurrentIndex(i);
    }
    if(event->key() == Qt::Key_Minus || event->key() == Qt::Key_Less){
        int i = ui->stackedWidget->currentIndex() -1;
        if(i < 0) i = 3;
        ui->stackedWidget->setCurrentIndex(i);
    }
    QMainWindow::keyPressEvent(event);
}

void MainWindow::mousePressEvent(QMouseEvent *event) {
    if (event->button() == Qt::RightButton) {
        QMenu *menu = new QMenu(this);

        QAction *MainAction = menu->addAction("Main");
        QAction *ListViewAction = menu->addAction("QListView");
        QAction *ListWidgetAction = menu->addAction("QListWidget");
        QAction *TableWidgetAction = menu->addAction("QTableWidget");
        QAction *ExitAction = menu->addAction("Exit");
        connect(MainAction, &QAction::triggered, this, &MainWindow::on_actionMain_triggered);
        connect(ListViewAction, &QAction::triggered, this, &MainWindow::on_actionQListView_triggered);
        connect(ListWidgetAction, &QAction::triggered, this, &MainWindow::on_actionQListWidget_triggered);
        connect(TableWidgetAction, &QAction::triggered, this, &MainWindow::on_actionQTableWidget_triggered);
        connect(ExitAction, &QAction::triggered, this, &MainWindow::on_actionExit_triggered);

        menu->popup(event->globalPosition().toPoint());
    }
}

