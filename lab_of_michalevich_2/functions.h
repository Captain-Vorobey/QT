#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <functional>
#include <cmath>
#include <map>

double function_temp(double x, double y, std::function<double(double)> f)
{
    return std::pow(f(x) + y, 2);
}

double function_first(double x, double y, std::function<double(double)> f)
{
    return function_temp(x, y, f) - std::cbrt(std::abs(f(x)));
}

double function_second(double x, double y, std::function<double(double)> f)
{
    return function_temp(x, y, f) + 4.0;
}

#endif // FUNCTIONS_H
