#ifndef ALGORITHMS_H
#define ALGORITHMS_H
#include "predicates.h"

namespace stu {

template <class Iterator>
Iterator min_element(Iterator first, Iterator last)
{
    Iterator min_el = first;
    for(; first != last; ++first)
    {
        if(*first < *min_el)
        {
            min_el = first;
        }
    }
    return min_el;
}

template <class T, class Iterator>
unsigned int count(Iterator first, Iterator last, T value)
{
    unsigned int counter = 0;
    for(; first != last; ++first)
    {
        if(*first == value)
        {
            ++counter;
        }
    }
    return counter;
}

template <class Iterator, class Functor>
Functor for_each(Iterator first, Iterator last, Functor f)
{
    for(; first != last; ++first)
    {
        f(*first);
    }
    return f;
}

}

#endif // ALGORITHMS_H
