#ifndef TESTLINEEDIT_H
#define TESTLINEEDIT_H

#include <QObject>

class TestLineEdit : public QObject {
    Q_OBJECT

private slots:
    void testNumericInput_data();
    void testNumericInput();
    void testEdit_data();
    void testEdit();
};

#endif // TESTLINEEDIT_H
