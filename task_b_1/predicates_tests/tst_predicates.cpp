#include <QtTest>
#include "../loops/predicates.h"

// add necessary includes here

class predicates : public QObject
{
    Q_OBJECT

public:
    predicates();
    ~predicates();

private slots:
    void test_case1();
    void test_is_palindrome();
    void test_is_palindrome_data();
};

predicates::predicates()
{

}

predicates::~predicates()
{

}

void predicates::test_case1()
{

}

void predicates::test_is_palindrome()
{
    QFETCH(int, value);
    QFETCH(bool, expected);
    QCOMPARE(stu::is_palindrome(value), expected);
}

void predicates::test_is_palindrome_data()
{
    QTest::addColumn<int>("value");
    QTest::addColumn<bool>("expected");
    QTest::addRow("row1") << 12321 << true;
    QTest::addRow("row2") << 123321 << true;
    QTest::addRow("row3") << 12454235 << false;
    QTest::addRow("row4") << 1 << true;
}

QTEST_APPLESS_MAIN(predicates)

#include "tst_predicates.moc"
