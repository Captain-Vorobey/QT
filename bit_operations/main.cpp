#include <QCoreApplication>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#define Male 1
#define Old 2
#define High 4

void bits(std::string name, int flags)
{
    if(flags & 1) // 001
    {
        std::cout << "Mr" << std::endl;
    }
    else {
        std::cout << "Ms" << std::endl;
    }

    if(flags & 2) //010
    {
        std::cout << "Old" << std::endl;
    }
    else {
        std::cout << "Young" << std::endl;
    }

    if(flags & 3) // 100
    {
        std::cout << "High" << std::endl;
    }
    else {
        std::cout << "Small" << std::endl;
    }
    std::cout << name << std::endl;
}

struct SingleTon {
    SingleTon() = default;
    void operator<<(int a)
    {
        std::cout << a << std::endl;
    }
}st;

enum Genre {
    Comedy, Horror, Adventure, Detective, Romantic
};

struct Person {
    std::string name;
    std::string surname;
};

std::ostream& operator<<(std::ostream& out, const Person& p)
{
    return out << "name: " << p.name << "surname: " << p.surname << std::endl;
}

struct Book {
    std::string name;
    Genre genre;
    Person author;
    Book() = default;
    Book(std::string n, Genre g, Person a): name(n), genre(g), author(a){}
};

std::ostream& operator<<(std::ostream& out, const Book& b)
{
    return out << "name: " << b.name << "genre: " << b.genre << "person: " << b.author << std::endl;
}

int f(std::vector<int> v, int n)
{
    int result = 0;
    int temp = v[0] * v[1];
    for(int i = 2; i < n; ++i)
    {
        result += result + temp;
        temp *= v[i];
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    bits("Egor", Male);
    //st.f(4);
    st << 4;
    std::fstream fs("test.txt", fs.in | fs.out | fs.trunc);
    if(!fs.is_open())
    {
        fs << "Error" << " ";
    }
    std::cout << fs.in << " " << fs.trunc;
    Book a;

    Genre key = Genre::Adventure;
    std::vector<Book> book;
    std::for_each(book.begin(), book.end(), [key](const Book& b){if(b.genre == key){std::cout << b << " ";}});
    return a.exec();
}
