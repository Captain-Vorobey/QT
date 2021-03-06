#ifndef TEST_H
#define TEST_H
#include <iostream>
#include <functional>
#include <vector>
#include <cmath>
#include <map>
#include <string>
#include "functions.h"

using UF = double (*)(double);

std::vector<UF> v1 {
    [](double x) {return (std::exp(x) - std::exp(-x)) / 2;},
    [](double x){return std::pow(x, 2);}

};


std::map<std::string ,std::function<double(double)>> v2 {
    {"sh(x)", [](double x) {return (std::exp(x) - std::exp(-x)) / 2;}},
    {"pow(x, 2)", [](double x){return std::pow(x, 2);}}
};

using UnaryFunction = std::function<double(double)>;
using GeneralFunction = std::function<double(double, double)>;
std::vector<GeneralFunction> operation { function_first, function_second};

double z_f(double x, double y, UnaryFunction f)
{
    std::vector<int>::size_type temp;
    //std::cout << v2["sh(x)"](3.8);
    if(x * y > 0)
    {
        temp = 0;
    }
    else {
        temp = 1;
    }
    return operation[temp](x, y, f);
}

void test()
{
    z_f();
}

#endif // TEST_H
