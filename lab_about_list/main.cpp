#include <QCoreApplication>
#include <iostream>
#include <list>
#include <forward_list>
#include <vector>
#include <string>

#include "forward_list.h"
#include "list.h"

struct Pair
{
    int m_first;
    int m_second;
    Pair() = default;
    Pair(int first, int second): m_first(first), m_second(second){}
};

stu::forward_list<char> sort_lists_1(char first_s, char last_s)
{
    stu::forward_list<char> vowels;
    for (; first_s != last_s; ++first_s) {
        if(first_s == 'a')
        {
            vowels.push_back(first_s);
        }

        if(first_s == 'e')
        {
            vowels.push_back(first_s);
        }

        if(first_s == 'i')
        {
            vowels.push_back(first_s);
        }

        if(first_s == 'j')
        {
            vowels.push_back(first_s);
        }

        if(first_s == 'o')
        {
            vowels.push_back(first_s);
        }

        if(first_s == 'u')
        {
            vowels.push_back(first_s);
        }

        if(first_s == 'y')
        {
            vowels.push_back(first_s);
        }
    }
    return vowels;
}

std::list<char> sort_lists_2(char first_s, char last_s)
{
    std::list<char> consonants;
    for (; first_s != last_s; ++first_s) {
        if(first_s == 'b' || first_s == 'c' || first_s == 'd' || first_s == 'f' || first_s == 'g' || first_s == 's' || first_s == 't' || first_s == 'v')
        {
            consonants.push_back(first_s);
        }

        if(first_s == 'w' || first_s == 'x' || first_s == 'z' || first_s == 'h' || first_s == 'k' || first_s == 'l' || first_s == 'm' || first_s == 'n' || first_s == 'p' || first_s == 'q' || first_s == 'r')
        {
            consonants.push_back(first_s);
        }
    }
    return consonants;
}

//#define print_container(first, last) std::for_each(first, last, [](char a){std::cout << a << " ";})

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    stu::forward_list<char> l{'a', 'e', 'i', 'j', 'o'};
    l.push_back('u');
    l.push_back('y');
    l.push_back('b');
    l.push_back('c');
    l.push_back('d');
    l.push_back('f');
    l.push_back('g');
    l.push_back('h');
    l.push_back('k');
    l.push_back('l');
    l.push_back('m');
    l.push_back('n');
    l.push_back('p');
    l.push_back('q');
    l.push_back('r');
    l.push_back('s');
    l.push_back('t');
    l.push_back('v');
    l.push_back('w');
    l.push_back('x');
    l.push_back('z');
    l.push_back('.');
    std::cout << "first list: ";
    std::for_each(l.begin(), l.end(), [](char a){std::cout << a << " ";});
    std::cout << std::endl;
    auto res = sort_lists_1(l.begin(), l.end());
    auto res1 = sort_lists_2(l.begin(), l.end());
    std::cout << "vowels: ";
    std::for_each(res.begin(), res.end(), [](char a){std::cout << a << " ";});
    std::cout << std::endl;
    std::cout << "consonants: ";
    std::for_each(res1.begin(), res1.end(), [](char a){std::cout << a << " ";});
    return a.exec();
}
