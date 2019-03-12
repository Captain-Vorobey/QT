#include <QCoreApplication>
#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <iterator>
#include <string>
#include <cstddef>
#include <ctime>
#include <fstream>

std::string get_random_string(char first_l, char last_l, int size)
{
    std::string res;
    std::mt19937 gen;
    gen.seed(time(0));
    std::uniform_int_distribution<int> uid(first_l,last_l);
    for(int i = 0; i < size; ++i)
    {
     res.push_back(uid(gen));
    }
    return res;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    std::string temp = get_random_string(65, 122, 10);
        //std::cout << temp << std::endl;
        std::fstream fs("Random Letter.txt", fs.in | fs.out | fs.trunc);
        if(!fs.is_open())
        {
            std::cout << "error";
        }
        else
        {
            fs << temp;
        }
        std::fstream fs1("Random Letter1.txt", fs1.in | fs1.out | fs1.app);
        if(!fs1.is_open())
        {
            std::cout << "error";
        }
        else
        {

        }
        fs.seekp(0);
        std::string sorted;
        fs >> sorted;
        std::cout << sorted << std::endl;
        std::sort(sorted.begin(), sorted.end());
        std::cout << sorted << std::endl;
        fs1.seekp(0);
        fs1 << sorted;
    return a.exec();
}
