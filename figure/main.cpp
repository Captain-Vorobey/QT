#include <QCoreApplication>
#include <iostream>
#include <cmath>
#define PI 3.14

struct Point
{
    int m_x;
    int m_y;
};

struct Line
{
public:
    Point start;
    Point end;
    int get_length()
    {
        return std::sqrt(std::pow(end.m_x - start.m_x)) + std::pow(end.m_y - start.m_y);
    }
};

class Figure
{
public:
    virtual int get_square() = 0;
    virtual int get_perimeter() = 0;
};

class Circle: public Figure
{
public:
    int a;
    get_square() override
    {
        return PI * std::pow(a, 2);
    }
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    return a.exec();
}
