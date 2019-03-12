#include <QtTest>
#include <QCoreApplication>

// add necessary includes here

class un : public QObject
{
    Q_OBJECT

public:
    un();
    ~un();

private slots:
    void initTestCase();
    void cleanupTestCase();
    void test_case1();

};

un::un()
{

}

un::~un()
{

}

void un::initTestCase()
{

}

void un::cleanupTestCase()
{

}

void un::test_case1()
{

}

QTEST_MAIN(un)

#include "tst_un.moc"
