#include "computers.h"

Computers::Computers(): Model("-"), HDD(0), Type("-") {}
Computers::Computers(QString model, qreal hdd, QString type): Model(model), HDD(hdd), Type(type) {}
QString Computers::GetModel() {
    return this->Model;
}
qreal Computers::GetHDD() {
    return this->HDD;
}
QString Computers::GetType() {
    return this->Type;
}
bool Computers::operator==(const Computers& other) const {
    return (this->Model == other.Model && this->HDD == other.HDD && this->Type == other.Type);
}

void GetData(const QString& fileName, Computers*& A, int &count) {
    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qWarning("Не удалось открыть файл");
        return;
    }

    QTextStream in(&file);
    count = 0;
    while (!in.atEnd()) {
        in.readLine();
        ++count;
    }
    file.seek(0);

    count /= 4;
    if (A != nullptr) {
        delete[] A;
    }
    A = new Computers[count];

    QString line;
    int i = 0;

    while (i < 4 * count && !in.atEnd()) {
        line = in.readLine().trimmed();

        switch (i % 4) {
        case 0:
            A[i / 4].Model = line;
            break;
        case 1:
            A[i / 4].HDD = line.toDouble();
            break;
        case 2:
            A[i / 4].Type = line;
            break;
        case 3:
            break;
        }
        ++i;
    }

    file.close();
}


void PutData(const QString& fileName, Computers A) {
    QFile file(fileName);
    if (!file.open(QIODevice::Append | QIODevice::Text)) {
        qWarning("Не удалось открыть файл для записи");
        return;
    }
    Computers* B = nullptr;
    int count;
    GetData("Task_01-7_READ.txt", B, count);
    bool exist = false;
    for(int i = 0; i < count; i++){
        if(A == B[i]) {
            exist = true;
            break;
        }
    }
    delete [] B;
    if(exist == false){
        QTextStream out(&file);
        out << A.GetModel() << "\n";
        out << A.GetHDD() << "\n";
        out << A.GetType() << "\n";
        out << "\n";
    }
    file.close();
}

void DeleteData(const QString& fileName, QString A){
    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qWarning("Не удалось открыть файл для удаления");
        return;
    }
    QStringList lines;
    QTextStream in(&file);

    QStringList parts = A.split(" | ");
    QString model = parts[0].section(": ", 1).trimmed();
    QString hdd = parts[1].section(": ", 1).trimmed();
    QString type = parts[2].section(": ", 1).trimmed();

    while (!in.atEnd()) {
        QString line1 = in.readLine().trimmed();
        QString line2 = in.atEnd() ? "" : in.readLine().trimmed();
        QString line3 = in.atEnd() ? "" : in.readLine().trimmed();
        QString line4 = in.atEnd() ? "" : in.readLine();

        if (line1 == model && line2 == hdd && line3 == type)
            continue;
        else
            lines << line1 << line2 << line3 << line4.trimmed();
    }
    file.close();

    if (file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Truncate)) {
        QTextStream out(&file);
        for (const QString &line : lines) {
            out << line << "\n";
        }
        file.close();
    }
}

void DeleteData(const QString& fileName, QString model, QString hdd, QString type){
    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qWarning("Не удалось открыть файл для удаления");
        return;
    }
    QStringList lines;
    QTextStream in(&file);

    while (!in.atEnd()) {
        QString line1 = in.readLine().trimmed();
        QString line2 = in.atEnd() ? "" : in.readLine().trimmed();
        QString line3 = in.atEnd() ? "" : in.readLine().trimmed();
        QString line4 = in.atEnd() ? "" : in.readLine();

        if (line1 == model && line2 == hdd && line3 == type)
            continue;
        else
            lines << line1 << line2 << line3 << line4.trimmed();
    }
    file.close();

    if (file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Truncate)) {
        QTextStream out(&file);
        for (const QString &line : lines) {
            out << line << "\n";
        }
        file.close();
    }
}


void ShowListView(QListView* view, Computers* A, int N) {
    if (!A || N < 0 || !view) return;

    QStandardItemModel* model = new QStandardItemModel(view);

    for (int i = 0; i < N; ++i) {
        QString text = QString("Model: %1 | HDD volume: %2 | Processor type: %3")
        .arg(A[i].GetModel())
            .arg(A[i].GetHDD())
            .arg(A[i].GetType());

        QStandardItem* item = new QStandardItem(text);
        model->appendRow(item);
    }

    view->setModel(model);
}

void ShowListWidget(QListWidget* view, Computers* A, int N){
    if (!A || N < 0 || !view) return;
    view->clear();

    for (int i = 0; i < N; ++i) {
        QString text = QString("Model: %1 | HDD volume: %2 | Processor type: %3")
        .arg(A[i].GetModel())
            .arg(A[i].GetHDD())
            .arg(A[i].GetType());
        view->addItem(text);
    }
}

void ShowTableWidget(QTableWidget* view, Computers* A, int N){
    if (!A || N < 0 || !view) return;

    view->setRowCount(N);

    for (int i = 0; i < N; ++i) {
        view->setItem(i, 0, new QTableWidgetItem(A[i].GetModel()));
        view->setItem(i, 1, new QTableWidgetItem(QString::number(A[i].GetHDD())));
        view->setItem(i, 2, new QTableWidgetItem(A[i].GetType()));
    }
}

void ShellSortListWidget(QListWidget* listWidget) {
    int n = listWidget->count();
    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; ++i) {
            QString temp = listWidget->item(i)->text();
            int j = i;
            while (j >= gap && listWidget->item(j - gap)->text() > temp) {
                listWidget->item(j)->setText(listWidget->item(j - gap)->text());
                j -= gap;
            }
            listWidget->item(j)->setText(temp);
        }
    }
}



