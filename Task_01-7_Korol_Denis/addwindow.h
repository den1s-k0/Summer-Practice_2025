#ifndef ADDWINDOW_H
#define ADDWINDOW_H

#include <QDialog>
#include <QString>

namespace Ui {
class AddWindow;
}

class AddWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AddWindow(QWidget *parent = nullptr);
    ~AddWindow();
signals:
    void textEntered(QString model, qreal hdd, QString type);
private slots:
    void on_buttonBox_accepted();

private:
    Ui::AddWindow *ui;
};

#endif // ADDWINDOW_H
