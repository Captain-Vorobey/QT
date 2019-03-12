#include <QCoreApplication>
#include <iostream>
#include <string>

char* strlength(char* first)
{
    int counter = 0;
    for (; *first != 0; ++first) {
        ++counter;
    }
    return counter + 1;
}

char* newstr(char* str)
{
    char* result = new char[strlength(str) * 2];
    for(char i = 0, j = 0; result[i] != 0; ++i, ++j)
    {
        result[j] = str[i];
        ++j;
        result[j] = ' ';
    }
    return result;
}



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    return a.exec();
}
