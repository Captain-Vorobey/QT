#include <QtTest>
#include "../loops/algorithms.h"
#include <QDebug>

// add necessary includes here

using Arr = std::array<int, 10>;
Q_DECLARE_METATYPE(Arr);
using UnaryPredicate = bool(*)(int);
//Q_DECLARE_METATYPE(UnaryPredicate);

class algorithms_tests : public QObject
{
    Q_OBJECT

public:
    algorithms_tests();
    ~algorithms_tests();

private slots:
    void test_case1();
    void test_none_of();
    void test_none_of_data();
};

algorithms_tests::algorithms_tests()
{

}

algorithms_tests::~algorithms_tests()
{

}

void algorithms_tests::test_case1()
{

}

void algorithms_tests::test_none_of()
{
    QFETCH(Arr, arr);
    QFETCH(UnaryPredicate, p);
    QFETCH(bool, expected);
    QCOMPARE(stu::none_of(arr.begin(), arr.end(), p), expected);
}

void algorithms_tests::test_none_of_data()
{
    QTest::addColumn<Arr>("arr");
    QTest::addColumn<UnaryPredicate>("p");
    QTest::addColumn<bool>("expected");
    Arr r1{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    QTest::addRow("row1") << r1 << [](int a){return a > 0;} << false;
}

QTEST_APPLESS_MAIN(algorithms_tests)

#include "tst_algorithms_tests.moc"
