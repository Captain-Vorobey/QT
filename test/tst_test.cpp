#include <QtTest>
#include "./tasks.h"

// add necessary includes here

class test : public QObject
{
    Q_OBJECT

public:
    test();
    ~test();

private slots:
    void test_sum_first_second();
    void test_sum_first_second_data();
};

test::test()
{

}

test::~test()
{

}

void test::test_sum_first_second()
{
    QFETCH(int, value1);
    QFETCH(int, expected);
    QCOMPARE(sum_first_second(value1), expected);
}

void test::test_sum_first_second_data()
{
    QTest::addColumn<int>("value1");
    QTest::addColumn<int>("expected");
    QTest::addRow("row1") << 1111 << 2;
    QTest::addRow("row2") << 2222 << 4;
    QTest::addRow("row3") << 3333 << 6;
}

QTEST_APPLESS_MAIN(test)

#include "tst_test.moc"
