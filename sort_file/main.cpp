#include <QCoreApplication>
#include <iostream>

void strcpy(char* first, char* first_d)
{
    while (*first_d = *first) {
        ++first_d;
        ++first;
    }
    //first_d = 0;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    char* str = "Hello";
    char* str1[3]{"a", "b", "c"};
    std::cout << str << std::endl;
    strcpy(str1, str1 + 3);
    return a.exec();
}
