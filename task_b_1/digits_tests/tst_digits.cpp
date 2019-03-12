#include <QtTest>
#include "../loops/digits.h"
#include <array>
#include <QDebug>

// add necessary includes here

using Arr = std::array<int, 10>;
Q_DECLARE_METATYPE(Arr);

class digits : public QObject
{
    Q_OBJECT

public:
    digits();
    ~digits();

private slots:
    void test_case1();
    void reverse_digit();
    void reverse_digit_data();
    void test_get_digit_array();
    void test_get_digit_array_data();
};

digits::digits()
{

}

digits::~digits()
{

}

void digits::test_case1()
{

}

void digits::reverse_digit()
{
    QFETCH(int, value1);
    QFETCH(int, value2);
    QCOMPARE(stu::reverse_digit(value1), value2);
}

void digits::reverse_digit_data()
{
    QTest::addColumn<int>("value1");
    QTest::addColumn<int>("value2");
    QTest::addRow("row1") << 12345 << 54321;
}

void digits::test_get_digit_array()
{
    QFETCH(int, value);
    QFETCH(Arr, arr);
    Arr temp = stu::get_digit_array(value);
    QCOMPARE(arr, temp);
}

void digits::test_get_digit_array_data()
{
    QTest::addColumn<int>("value");
    QTest::addColumn<std::array<int, 10>>("arr");
    std::array<int, 10>arr1{0, 1, 0, 3, 0, 0, 0, 0, 0, 2};
    QTest::addRow("row1") << 333199 << arr1;
}

QTEST_APPLESS_MAIN(digits)

#include "tst_digits.moc"
