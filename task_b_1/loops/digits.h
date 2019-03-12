#ifndef DIGITS_H
#define DIGITS_H
#include <array>
#include <algorithm>
#include <cmath>

namespace stu {

std::array<int, 10> get_digit_array(int value)
{
    std::array<int, 10> result{0};
    for(; value; value /= 10)
    {
        ++result[value % 10];
    }
    return result;
}

int reverse_digit(int value)
{
    int result = 0;
    for(; value; value /= 10)
    {
        result *= 10;
        result = result + value % 10;
    }
    return result;
}

int sum_digits_between(int value, int first, int last)
{
    int temp = value / std::pow(10, first); // 12345
    int sum = 0;
    for(int i = last; i != 0; --i, temp = temp / 10)
    {
        sum += temp % 10;
    }
    return sum;
}

}

#endif // DIGITS_H
