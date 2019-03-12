#include <QCoreApplication>
#include <iostream>
#include <vector>
#include <iterator>

#include "array.h"

struct A
{
    int arr[5];
private:
    int x;
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    std::vector<int> v1{1, 2, 3, 4, 5};
    std::reverse_iterator<std::vector<int>::iterator> begin = v1.rbegin();
    std::reverse_iterator<decltype (v1.begin())> end = v1.rend();
    for(; begin != end; ++begin)
        {
            std::cout << *begin <<" ";
        }
        array<int, 10> arr{1,2,3,4,5,6,7,8,9,10};
        for(int i = 0; i != 10; ++i)
        {
            std::cout << arr.m_element[i] << " " ;
        }
        A test{1,2,3,4,5};
    return a.exec();
}
