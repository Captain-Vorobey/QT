#include <QCoreApplication>
#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>
#include <functional>
#include <iterator>

namespace stu {

template <class Iterator>
void insertion_sort_1(Iterator first, Iterator last)
{
    ++first;
    for(Iterator i = first; i != last; ++i)
    {
        for(Iterator j = i; j != first - 1 && *j < *(j - 1); --j)
        {
            std::iter_swap(j, j - 1);
        }
    }
}

void insertion_sort_2(int* arr, int size)
{
    for(int i = 1; i < size; ++i)
    {
        for(int j = i; j > 0 && arr[j] < arr[j - 1]; --j)
        {
            std::swap(arr[j], arr[j - 1]);
        }
    }
}

template <class Iterator>
void insertion_sort_3(Iterator first, Iterator last)
{
    for(; first != last; ++first)
    {
        std::iter_swap(first, std::min(first, last));
    }
}

void shell_sort_1(int* array, int size)
{
    int temp = 0;
    auto step = size / 2;
    int j;
    while(step > 0)
    {
        step /= 2;
        for(int i = step; i != size; i++)
        {
            temp = array[i];
            for(j = i; j >= step; j -= step)
            {
                if(temp < array[j - step])
                {
                    array[j] = array[j - step];
                }
                else
                {
                    break;
                }
            }
            array[j] = temp;
            std::cout << array[j] << " ";
        }
        std::cout << std::endl;
    }
}

void shell_sort1(int* arr, int size)
{
    for(int k = size / 2; k > 0; k /= 2)
    {
    for(int i = k; i < size; ++i)
    {
        for(int j = i; j > 0 && arr[j] < arr[j - k]; --j)
        {
            std::swap(arr[j], arr[j - k]);
        }
    }
  }
}

template <class Iter, class BO >
void shell_sort(Iter first, Iter last, BO op)
{
    auto size = std::distance(first, last);
    for(int k = size / 2; k > 0; k /= 2)
    {
        for(Iter i = first + k; i != last; ++i)
        {
            for(Iter j = i; j > first && op(*j, *(j - k)); --j)
            {
                std::iter_swap(j, j - k);
            }
        }
    }
}

template <class Iter>
std::vector<int> interset(Iter first_1, Iter last_1, Iter first_2){
    std::vector<int> result;
    while(first_1!=last_1){
        if(*first_1  == *first_2){
            result.push_back(*first_1);
            ++first_1;
            ++first_2;
        }
        else{
            if(*first_1 < *first_2){
                ++first_1;
            }
            else{
                ++first_2;
            }
        }

    }
    return result;
}

template<class Iter>
std::vector<int> relative_complement(Iter first_1, Iter last_1, Iter first_2){
    std::vector<int> result;
    while(first_1 != last_1){
        if(*first_1  == *first_2){
            ++first_1;
            ++first_2;
        }
        else{
            if(*first_1 < *first_2){
                result.push_back(*first_1);
                ++first_1;
            }
            else{
                ++first_2;
            }
        }

    }
    return result;
}
/*
template<typename BidirectionalIterator, typename Compare >
void quick_sort( BidirectionalIterator first, BidirectionalIterator last, Compare cmp )
{
  if( first != last ) {
    BidirectionalIterator left  = first;
    BidirectionalIterator right = last;
    BidirectionalIterator pivot = left++;

    while( left != right ) {
      if( cmp( left, pivot ) ) {
         ++left;
      } else {
         while( (left != --right) && cmp( pivot, right ) )
           ;
         std::iter_swap( left, right );
      }
    }

    --left;
    std::iter_swap( first, left );

    quick_sort( first, left, cmp );
    quick_sort( right, last, cmp );
  }
}*/

}

#define print_container(first, last) std::for_each(first, last, [](int value){std::cout << value << " ";});

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    /*int array[8]{1, 5, 6, 8, 9, 3, 4, 2};
    print_container(array, array + 8);
    stu::shell_sort(array, 8);
    std::cout <<std::endl;
    print_container(array, array + 8);
    std::cout << std::endl;
    int array1[8]{1, 5, 6, 8, 9, 3, 4, 2};
    print_container(array1, array1 + 8);
    stu::insertion_sort_3(array1, array1 + 8);
    std::cout <<std::endl;
    print_container(array1, array1 + 8);*/

    std::vector<int> v1{2, 1, 4, 22, 85};
    std::vector<int> v2{11, 9, 22, 82, 43};
    print_container(v1.begin(), v1.end());
    std::cout << std::endl;
    print_container(v2.begin(), v2.end());
    std::cout << std::endl;
    stu::shell_sort(v1.begin(), v1.end(), [](int a, int b){return a < b;});
    stu::shell_sort(v2.begin(), v2.end(), [](int a, int b){return a < b;});
    print_container(v1.begin(), v1.end());
    std::cout << std::endl;
    print_container(v2.begin(), v2.end());
    std::cout << std::endl;
    auto result = stu::relative_complement(v1.begin() ,v1.end(), v2.begin());
    std::for_each(result.begin(),result.end(), [](int value){std::cout << value << " ";});
    return a.exec();
}
