#ifndef SORTS_H
#define SORTS_H
#include <utility>
#include <vector>

/*int get_alphabet_vector()
{
    std::vector<Pair> result;
    for(char i = 'A'; i < 'Z' + 1; ++i)
    {
        result.push_back(i, 0);
    }
}

template <class Iterator>
std::vector<Pair> f(Iterator first, Iterator last)
{
    auto res = get_alphabet_vector();
    for(; first != last; ++first) 
    {
        auto temp = find(res.begin(), res.end()) [first](Pair a){return a.first == *first;};
    }
}*/

void insertion_sort(int* arr, int size)
{
    for(int i = 0; i != size; ++i)
    {
        for(int j = 0; arr[j] < arr[j + 1] && j < size - 1; ++j)
        {
            std::swap(arr[j], arr[j + 1]);
        }
    }
}

template <class Iter>
void comb(Iter first, Iter last)
{
    double fact = 1.23;
    int step = (last - first) - 1;
    while (step > 0) {
        for(Iter i = first; i + step < last; ++i)
        {
            if(*i > *(i + step))
            {
                std::iter_swap(i, i + step);
            }
        }
        step /= fact;
    }
}

template <class Iter>
void bubble_sort(Iter first, Iter last)
{
    std::ptrdiff_t times = last - first;
    --last;
    for(std::ptrdiff_t i = 0; i < times - 1; ++i)
    {
        for(Iter j = first; j != last - i; ++j)
        {
            if(*j > *(j + 1))
            {
            std::iter_swap(j, j + 1);
            }
        }
    }
}

#endif // SORTS_H
