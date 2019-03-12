#ifndef ALGORITHMS_H_INCLUDED
#define ALGORITHMS_H_INCLUDED
#include <algorithm>

namespace stu
{

template <class Iter>
    int average (Iter first, Iter last)
    {
        int times = 0;
        int result = 0;
        std::for_each(first, last, [&result, &times](int a){ if(a > 0){result += a; ++times;}});
        return result / times;

    }
}

#endif // ALGORITHMS_H_INCLUDED
