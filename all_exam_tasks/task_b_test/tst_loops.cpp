#include <QtTest>

// add necessary includes here

class loops : public QObject
{
    Q_OBJECT

public:
    loops();
    ~loops();

private slots:
    void test_case1();

};

loops::loops()
{

}

loops::~loops()
{

}

void loops::test_case1()
{

}

QTEST_APPLESS_MAIN(loops)

#include "tst_loops.moc"
