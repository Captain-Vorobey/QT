#ifndef TASKS_H
#define TASKS_H
#include <cmath>
#define inscribed(a) (a) / 2.0
#define ciurcumscribed(a) a / std::sqrt(2)

template <class Number>
Number circumference(Number d)
{
    Number r = d / 2;
    return 2 * PI<Number>* r;
}


#endif // TASKS_H
