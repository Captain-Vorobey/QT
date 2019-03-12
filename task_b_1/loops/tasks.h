#ifndef TASKS_H
#define TASKS_H
#include "../loops/predicates.h"
#include "algorithms.h"
#include "digits.h"
#include <algorithm>
#include <vector>

namespace loops {

bool task1(int value)
{
    return stu::is_repeted_n_times(value, 2);
}

bool task2(int value)
{
    return stu::is_repeted_n_times(value, 3);
}

bool task3(int value)
{
    return stu::is_palindrome(value);
}

bool task4(int value)
{
   std::array<int, 10> temp = stu::get_digit_array(value);
   return stu::none_of(temp.begin(), temp.end(), [](int a){return a > 1;});
}

bool task5(int value, int k)
{
    return stu::is_repeted_n_times(value, k);
}

bool task6(int value)
{
    std::array<int, 10> temp1 = stu::get_digit_array(value);
    return stu::none_of(temp1.begin(), temp1.end(), [](int a){return a > 1;});
}

bool task7(int value)
{
    return stu::is_repeted_n_times(value, 2);
}

bool task8(int value, int k)
{
    std::array<int, 10> temp2 = stu::get_digit_array(value);
    return stu::any_of(temp2.begin(), temp2.end(), [k](int a){return a > k;});
}

bool task9(int value, int n, int k)
{
    return stu::sum_digits_between(value, n, k) == stu::sum_digits_between(stu::reverse_digit(value), n, k);
}

bool task10(int value, int k)
{
    std::array<int, 10> temp3 = stu::get_digit_array(value);
    return stu::any_of(temp3.begin(), temp3.end(), [k](int a){return a > k;});
}

bool task11(int value, int n, int k)
{
    auto temp4 = stu::get_digit_array(value);
    return std::count_if(temp4.begin(), temp4.end(), [n](int a){return a < n;}) == k;
}

bool task12(int value)
{
    return true;
}

}

#endif // TASKS_H
