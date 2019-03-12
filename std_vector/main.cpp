#include <QCoreApplication>
#include <iostream>
#include "simple_vector.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);  
    vector<int> b{1, 2, 3, 4, 5};
    for(auto i = b.begin(); i != b.end(); ++i)
    {
        std::cout << *i << std::endl;
    }

    std::cout << b.m_v_impl.m_size << " " << b.m_v_impl.m_capacity << " " << b.m_v_impl.m_size << std::endl;
    b.at(6);
    return a.exec();
}
