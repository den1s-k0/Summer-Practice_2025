#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_actionQListView_triggered();

    void on_actionQListWidget_triggered();

    void on_actionQTableWidget_triggered();

    void on_actionMain_triggered();

    void on_actionExit_triggered();

    void on_pushButton_2_1_clicked();

    void receiveListText(QString model, qreal hdd, QString type);

    void receiveTableText(QString model, qreal hdd, QString type);

    void on_pushButton_2_2_clicked();

    void on_pushButton_2_3_clicked();

    void on_pushButton_2_4_clicked();

    void on_pushButton_3_1_clicked();

    void on_pushButton_3_2_clicked();

    void keyPressEvent(QKeyEvent *event) override;

    void mousePressEvent(QMouseEvent *event) override;

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
