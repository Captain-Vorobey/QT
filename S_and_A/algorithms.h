#ifndef ALGORITHMS_H_INCLUDED
#define ALGORITHMS_H_INCLUDED
#include <algorithm>
namespace stu
{

template <class T, class Iterator>
Iterator find(Iterator first, Iterator last, T value)
{
    for(; first != last; ++first)
    {
        if(value == *first)
        {
            return first;
        }
    }
    return first;
}

template <class Iterator, class UP>
Iterator find_if(Iterator first, Iterator last, UP p)
{
    for(; first != last; ++first)
    {
        if(p(*first))
        {
            return first;
        }
    }
    return first;
}

template <class T, class Iterator>
T count (Iterator first, Iterator last, T value)
{
    T counter = 0;
    for(; first != last; ++first)
    {
        if(*first == value)
        {
            ++counter;
        }
    }
    return counter;
}

template <class T,  class Iterator, class UP>
Iterator count_if(Iterator first, Iterator last, UP p)
{
    T counter = 0;
    for(; first != last; ++first)
    {
        if(p(*first))
        {
            ++counter;
        }
    }
    return counter;
}

void bubble_sort(int* array,int size)
{
    bool is_sorted;
    for(int i = 0; i != size; ++i)
    {
        is_sorted = true;
        for(int j = 0; j != size - 1 - i; ++j)
        {
            if(array[j] > array[j+1])
            {
                std::swap(array[j], array[j + 1]);
                is_sorted = false;
            }
        }
        if(is_sorted)
        {
            return;
        }
    }
}

int binary_search(int* array, int left, int right, int key)
{
    int middle = (right + left) / 2;
    while(left <= right)
    {
        if(key < array[middle])
        {
            right = middle - 1;
        }
        if(key > array[middle])
        {
            left = middle + 1;
        }
        if(array[middle] == key)
        {
            return array[middle];
        }
        }
        return -1;
}



template <class Iterator>
void print_array(Iterator first, Iterator last)
{
    for(; first != last; ++first)
    {
        std::cout<< *first;
    }
}


}


#endif // ALGORITHMS_H_INCLUDED
