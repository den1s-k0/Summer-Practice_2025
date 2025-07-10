#ifndef COMPUTERS_H
#define COMPUTERS_H

#include <QString>
#include <fstream>
#include <QTextStream>
#include <QDebug>
#include <QFile>
#include <QListView>
#include <QListWidget>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QStandardItemModel>
#include <QStandardItem>

class Computers
{
    QString Model;
    qreal HDD;
    QString Type;
public:
    Computers();
    Computers(QString model, qreal hdd, QString type);
    QString GetModel();
    qreal GetHDD();
    QString GetType();
    bool operator==(const Computers& other) const;
    friend void GetData(const QString& fileName, Computers*& A, int &count);
    friend void PutData(const QString& fileName, Computers A);
};

void DeleteData(const QString& fileName, QString A);
void DeleteData(const QString& fileName, QString model, QString hdd, QString type);
void ShowListView(QListView* view, Computers* A, int N);
void ShowListWidget(QListWidget* view, Computers* A, int N);
void ShowTableWidget(QTableWidget* view, Computers* A, int N);
void ShellSortListWidget(QListWidget* listWidget);
#endif // COMPUTERS_H
