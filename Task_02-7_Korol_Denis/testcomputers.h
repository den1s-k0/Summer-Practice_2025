#ifndef TESTCOMPUTERS_H
#define TESTCOMPUTERS_H

#include <QObject>

class TestComputers : public QObject {
    Q_OBJECT

private slots:
    void testDConstructor();
    void testPConstructor_data();
    void testPConstructor();
    void testEquality_data();
    void testEquality();
    void testGetters();
};

#endif // TESTCOMPUTERS_H
