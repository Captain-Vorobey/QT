#include <QCoreApplication>
#include <cmath>
#include <iostream>

double get_step(double a, double b)
{
    return (b - a) / 10.0;
}

double y (double x)
{
    return std::exp(2 * x);
}

void print_table_y(double first,  double last)
{
    double step = get_step(first, last);
    for(;first < last; first += step)
    {
        std::cout << y(first) << std::endl;
    }
}

double facktorial(double value)
{
    double result = 1.0;
    for(double i = 1.0; i <= value; i += 1.0)
    {
        result *= i;
    }
    return result;
}

double s(double x, double n)
{
    return std::pow(2 * x, n) / facktorial(n);
}

double s_distance(double x, double n )
{
    double temp = 0.0;
    for(double i = 0.0; i <= n; i += 1)
    {
        temp += s(x,i);
    }
    return temp;
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    //double first;
    //std::cin >> first;
    //print_table_y(3.5, 20.0);
    //std::cout << facktorial(6);
    std::cout << s_distance(2,100);

    return a.exec();
}
