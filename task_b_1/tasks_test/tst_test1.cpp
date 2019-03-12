#include <QtTest>
#include "../loops/tasks.h"

// add necessary includes here

class test1 : public QObject
{
    Q_OBJECT

public:
    test1();
    ~test1();

private slots:
    void test_case1();
    void test_task1();
    void test_task1_data();
    void test_task2();
    void test_task2_data();
    void test_task3();
    void test_task3_data();
    void test_task4();
    void test_task4_data();
    void test_task5();
    void test_task5_data();
    void test_task6();
    void test_task6_data();
    void test_task7();
    void test_task7_data();
    void test_task8();
    void test_task8_data();
    void test_task9();
    void test_task9_data();
    void test_task10();
    void test_task10_data();
    void test_task11();
    void test_task11_data();
    void test_task12();
    void test_task12_data();
};

test1::test1()
{

}

test1::~test1()
{

}

void test1::test_case1()
{

}

void test1::test_task1()
{
    QFETCH(int, value);
    QFETCH(bool, expected);
    QCOMPARE(loops::task1(value), expected);
}

void test1::test_task1_data()
{
    QTest::addColumn<int>("value");
    QTest::addColumn<bool>("expected");
    QTest::addRow("row1") << 12314 << true;
    QTest::addRow("row2") << 12344 << true;
    QTest::addRow("row3") << 12334 << true;
    QTest::addRow("row4") << 12333 << false;
    QTest::addRow("row5") << 42334 << false;
    QTest::addRow("row6") << 4 << false;
}

void test1::test_task2()
{
    QFETCH(int, value);
    QFETCH(bool, expected);
    QCOMPARE(loops::task2(value), expected);
}

void test1::test_task2_data()
{
    QTest::addColumn<int>("value");
    QTest::addColumn<bool>("expected");
    QTest::addRow("row1") << 12311 << true;
    QTest::addRow("row2") << 14344 << true;
    QTest::addRow("row3") << 32334 << true;
    QTest::addRow("row4") << 12233 << false;
    QTest::addRow("row5") << 42334 << false;
    QTest::addRow("row6") << 41 << false;
}

void test1::test_task3()
{
    QFETCH(int, value);
    QFETCH(bool, expected);
    QCOMPARE(loops::task3(value), expected);
}

void test1::test_task3_data()
{
    QTest::addColumn<int>("value");
    QTest::addColumn<bool>("expected");
    QTest::addRow("row1") << 123321 << true;
    QTest::addRow("row2") << 12321 << true;
    QTest::addRow("row3") << 11 << true;
    QTest::addRow("row4") << 12233 << false;
    QTest::addRow("row5") << 42334 << false;
    QTest::addRow("row6") << 1 << true;
}

void test1::test_task4()
{
    QFETCH(int, value);
    QFETCH(bool, expected);
    QCOMPARE(loops::task4(value), expected);
}

void test1::test_task4_data()
{
    QTest::addColumn<int>("value");
    QTest::addColumn<bool>("expected");
    QTest::addRow("row1") << 37467 << false;
    QTest::addRow("row2") << 21467 << true;
    QTest::addRow("row3") << 11717 << false;
}

void test1::test_task5()
{
    QFETCH(int, value);
    QFETCH(int, k);
    QFETCH(bool, expected);
    QCOMPARE(loops::task5(value, k), expected);
}

void test1::test_task5_data()
{
    QTest::addColumn<int>("value");
    QTest::addColumn<int>("k");
    QTest::addColumn<bool>("expected");
    QTest::addRow("row1") << 103326 << 2 << true;
    QTest::addRow("row2") << 12326 << 2 << true;
    QTest::addRow("row3") << 111 << 3 << true;
    QTest::addRow("row4") << 12233 << 4 << false;
    QTest::addRow("row5") << 42334 << 2 << false;
    QTest::addRow("row6") << 1 << 3 << false;
}

void test1::test_task6()
{
    QFETCH(int, value);
    QFETCH(bool, expected);
    QCOMPARE(loops::task6(value), expected);
}

void test1::test_task6_data()
{
    QTest::addColumn<int>("value");
    QTest::addColumn<bool>("expected");
    QTest::addRow("row1") << 37046700 << false;
    QTest::addRow("row2") << 214678 << true;
    QTest::addRow("row3") << 1171744 << false;
}

void test1::test_task7()
{
    QFETCH(int, value);
    QFETCH(bool, expected);
    QCOMPARE(stu::is_repeted_n_times(value), expected);
}

void test1::test_task7_data()
{
    QTest::addColumn<int>("value");
    QTest::addColumn<bool>("expected");
    QTest::addRow("row1") << 32345 << true;
    QTest::addRow("row2") << 187312 << true;
    QTest::addColumn("row3") << 8884477732 << false;
}

void test1::test_task8()
{
    QFETCH(int, value);
    QFETCH(int, k);
    QFETCH(bool, expected);
    QCOMPARE(stu::is_repeted_n_times(value, k), expected);
}

void test1::test_task8_data()
{
    QTest::addColumn<int>("value");
    QTest::addColumn<int>("k");
    QTest::addColumn<bool>("expected");
    QTest::addRow("row1") << 2594728 << 2 << false;
    QTest::addRow("row2") << 2524728 << 2 << true;
    QTest::addRow("row3") << 2393323 << 2 << false;
    QTest::addRow("row4") << 2333323 << 3 << true;
    QTest::addRow("row5") << 23923 << 1 << true;
}
}

void test1::test_task9()
{
    QFETCH(int, value);
    QFETCH(int, n);
    QFETCH(int, k);
    QFETCH(bool, expected);
    QCOMPARE(stu::sum_digits_between(value, n, k), expected);
}

void test1::test_task9_data()
{
    QTest::addColumn<int>("value");
    QTest::addColumn<int>("n");
    QTest::addColumn<int>("k");
    QTest::addColumn<bool>("expected");
    QTest::addRow("row1") << 123321 << 0 << 2 <<
}

void test1::test_task10()
{
    QFETCH(int, value);
    QFETCH(int, k);
    QFETCH(bool, expected);
    QCOMPARE(stu::is_repeted_n_times(value, k), expected);
}

void test1::test_task10_data()
{
    QTest::addColumn<int>("value");
    QTest::addColumn<int>("k");
    QTest::addColumn<bool>("expected");
    QTest::addRow("row1") << 5483596 << 4 << false;
    QTest::addRow("row2") << 243228 << 2 << true;
    QTest::addRow("row3") << 3747777 << 3 << true;
}

void test1::test_task11()
{

}

void test1::test_task11_data()
{

}

void test1::test_task12()
{

}

void test1::test_task12_data()
{

}

QTEST_APPLESS_MAIN(test1)

#include "tst_test1.moc"
