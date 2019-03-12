#ifndef BINARY_SEARCH_H_INCLUDED
#define BINARY_SEARCH_H_INCLUDED
#include <iterator>
int binary_search_1(int* arr, int start, int end, int key)
{
    --end;
    int middle;
    while(start <= end)
    {
        middle = (start + end) / 2;
        if(key > arr[middle])
        {
            start = middle + 1 ;
        }
        if(key < arr[middle])
        {
            end = middle - 1;
        }
        if(key == arr[middle])
        {
            return middle;
        }
    }
    return -1;
}

int binary_search_2(int* arr, int start, int end, int key)
{
    --end;
    int middle;
    while(start <= end)
    {
        middle = (start + end) / 2;
        if(key > arr[middle])
        {
            start = middle + 1;
        }
        else
        {
            if(key < arr[middle])
            {
                end = middle - 1;
            }
            else
            {
                return middle;
            }
        }
    }
    return -1;
}

template <class Iterator, class T>
Iterator binary_search_3(Iterator first, Iterator last, T key)
{
    Iterator not_found = last--;
    Iterator arr = first;
    int start = 0;
    int end = std::distance(first, last);
    int middle;
    while(first <= last)
    {
        middle = (start + end)  / 2;
        if(key > arr[middle])
        {
            start = middle + 1;
        }
        else
        {
            if(key < arr[middle])
            {
                end = middle - 1;
            }
            else
            {
                return arr + middle;
            }
        }
    }
    return not_found;
}

int BinarySearch(int* arr, int start, int last, int value)
{
    --last;
    int middle;
    while ( last >= start )
    {
        middle = (last + start) / 2;
        if (value == arr[middle])
        {
            return middle;
        }
        else
        {
            if (value < arr[middle])
            {
                last = middle - 1;
            }
            else
            {
                start = middle + 1;
            }
        }
    }
    return -1 ;
}


int fuckToReal(int value)
{
    if(value == 0)
    {
        return 1;
    }
    return value * fuckToReal(value - 1);
}



#endif // BINARY_SEARCH_H_INCLUDED
