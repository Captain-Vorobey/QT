#ifndef PREDICATES_H
#define PREDICATES_H
#include "digits.h"
#include <algorithm>

namespace stu {

    bool is_palindrome(int value)
    {
        return value == stu::reverse_digit(value);
    }

    bool is_repeted_n_times(int value, int n)
    {
        std::array<int, 10> result = get_digit_array(value);
        std::sort(result.begin(), result.end(), [](int a, int b){return a > b;});
        return result[0] == n && std::all_of(result.begin() + 1, result.end(), [](int a){return a == 0 || a == 1;});
    }

    int get_last_n_digit(int v, int n) 
    {
        return v % pow(10, n);
    }
    
    int count_ranges(int value)
    {
        int res = 0;
        for(; value; value /= 10) 
        {
            ++res;
        }
        return res;
    }

    bool is_greater(int a, int b)
    {
        return a < b;
    }

}

#endif // PREDICATES_H
