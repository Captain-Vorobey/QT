#include <QCoreApplication>
#include <iostream>
#include <initializer_list>


struct List
{
    struct Node
    {
        Node* next = nullptr;
        int value;
        Node() = default;
        Node(int v): value(v){};
    };
    List() = default;
    Node* head = nullptr;
    Node* find_last()
    {
        Node* i = head;
        for(; i -> next != nullptr; ++i)
        {
            return i;
        }
    }

    void push_back(int v)
    {
        if(head == nullptr)
        {
            head = new Node(v);
        }
        else {
            Node* temp = new Node(v);
            temp -> next = new Node(v);
        }
    }
};

struct List1
{
    List1(std::initializer_list<int> l)
    {
        for(auto i = l.begin(); i != l.end(); ++i)
        {
            this->push_back(*i);
        }
    }
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    return a.exec();
}
