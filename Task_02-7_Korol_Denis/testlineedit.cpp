#include <QtTest/QtTest>
#include <QLineEdit>
#include "testlineedit.h"

void TestLineEdit::testNumericInput_data() {
    QTest::addColumn<QString>("input");
    QTest::addColumn<bool>("ok");

    QTest::newRow("int") << "42" << true;
    QTest::newRow("float") << "3.14" << true;
    QTest::newRow("negative") << "-100" << true;
    QTest::newRow("text") << "hello" << false;
    QTest::newRow("mixed") << "123abc" << false;
    QTest::newRow("empty") << "" << false;
}

void TestLineEdit::testNumericInput() {
    QFETCH(QString, input);
    QFETCH(bool, ok);

    QLineEdit lineEdit;
    lineEdit.setText(input);

    bool parsed;
    lineEdit.text().toDouble(&parsed);

    QCOMPARE(parsed, ok);
}

void TestLineEdit::testEdit_data() {
    QTest::addColumn<QString>("input");

    QTest::newRow("int") << "42";
    QTest::newRow("float") << "3.14";
    QTest::newRow("negative") << "-100";
    QTest::newRow("text") << "hello";
    QTest::newRow("mixed") << "123abc";
}

void TestLineEdit::testEdit() {
    QLineEdit a;
    QFETCH(QString, input);
    QTest::keyClicks(&a, input);

    QCOMPARE(a.text(), input);
    QVERIFY(a.isModified());
}

QTEST_MAIN(TestLineEdit)
