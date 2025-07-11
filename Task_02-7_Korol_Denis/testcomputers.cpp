#include <QtTest/QtTest>
#include "testcomputers.h"
#include "computers.h"

void TestComputers::testDConstructor() {
    Computers comp;
    QCOMPARE(comp.GetModel(), QString("-"));
    QCOMPARE(comp.GetHDD(), 0.0);
    QCOMPARE(comp.GetType(), QString("-"));
}

void TestComputers::testPConstructor_data() {
    QTest::addColumn<QString>("model");
    QTest::addColumn<qreal>("hdd");
    QTest::addColumn<QString>("type");

    QTest::newRow("row1") << "Asus" << 512.0 << "Intel";
    QTest::newRow("row2") << "HP" << 1024.5 << "AMD";
    QTest::newRow("row3") << "Lenovo" << 0.0 << "Ryzen";
    QTest::newRow("row4") << "" << 128.0 << "";
}

void TestComputers::testPConstructor() {
    QFETCH(QString, model);
    QFETCH(qreal, hdd);
    QFETCH(QString, type);

    Computers comp(model, hdd, type);

    QCOMPARE(comp.GetModel(), model);
    QCOMPARE(comp.GetHDD(), hdd);
    QCOMPARE(comp.GetType(), type);
}

void TestComputers::testEquality_data() {
    QTest::addColumn<QString>("model");
    QTest::addColumn<qreal>("hdd");
    QTest::addColumn<QString>("type");

    QTest::newRow("row1") << "Asus" << 512.0 << "Intel";
    QTest::newRow("row2") << "HP" << 1024.5 << "AMD";
    QTest::newRow("row3") << "Lenovo" << 0.0 << "Ryzen";
    QTest::newRow("row4") << "" << 128.0 << "";
}

void TestComputers::testEquality() {
    QFETCH(QString, model);
    QFETCH(qreal, hdd);
    QFETCH(QString, type);

    Computers a(model, hdd, type);
    Computers b(model, hdd, type);
    QVERIFY(a == b);
    Computers c(model, hdd, type);
    Computers d(model, hdd, "-");
    QVERIFY(!(c == d));
}

void TestComputers::testGetters() {
    Computers c("HP", 256, "AMD");
    QCOMPARE(c.GetModel(), QString("HP"));
    QCOMPARE(c.GetHDD(), 256.0);
    QCOMPARE(c.GetType(), QString("AMD"));
}

QTEST_MAIN(TestComputers)
