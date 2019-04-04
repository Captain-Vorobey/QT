#ifndef LIST_H
#define LIST_H
#include <initializer_list>
#include <algorithm>
#include <iostream>
#include "riter.h"

namespace stu {

template <class T>
struct list
{
    struct _iterator;
    using value_type = T;
    using size_type = std::size_t;
    using difference_type	= std::ptrdiff_t;
    using reference = value_type&;
    using const_reference	= const value_type&;
    using iterator = _iterator;
    using reverse_iterator = stu::reverse_iterator<iterator>;
    //using const_iterator = Constant LegacyBidirectionalIterator;
    //using reverse_iterator = std::reverse_iterator<iterator>;
    //using const_reverse_iterator = std::reverse_iterator<const_iterator>;

    struct Node
    {
        value_type value;
        Node* prev = nullptr;
        Node* next = nullptr;
        Node() = default;
        Node(value_type v, Node* p = nullptr, Node* n = nullptr):value(v), prev(p), next(n) {}
    };


    struct _iterator
    {
        using iterator_category = std::bidirectional_iterator_tag;
        Node* m_current = nullptr;
        _iterator () = default;
        _iterator (Node* current):m_current(current) {}

        reference operator* ()
        {
            return m_current->value;
        }

        bool operator== (const iterator& that)
        {
            return this->m_current == that.m_current;
        }

        bool operator!= (const iterator& that)
        {
            return !(*this == that);
        }

        operator bool ()
        {
            return m_current != nullptr;
        }

        iterator& operator++ ()
        {
            m_current = m_current->next;
            return *this;
        }

        iterator operator++ (int)
        {
            iterator temp = *this;
            m_current = m_current->next;
            return temp;
        }

        reference operator-> ()
        {
            return m_current->value;
        }

        iterator& operator-- ()
        {
            m_current = m_current->prev;
            return *this;
        }

        iterator operator-- (int)
        {
            iterator temp = *this;
            m_current = m_current->prev;
            return temp;
        }

        iterator operator+(int diff)
        {
            iterator temp = *this;
            for(int i = 0; i != diff; ++i)
            {
                ++temp;
            }
            return temp;
        }

        iterator operator-(int diff)
        {
            iterator temp = *this;
            for(int i = 0; i != diff; ++i)
            {
                --temp;
            }
            return temp;
        }
    };

    size_type m_size = 0;

    Node* head = nullptr;
    list()
    {
        head = new Node();
    }

    list(std::initializer_list<T> a):list()
    {
        for(auto i = a.begin(); i != a.end(); ++i)
        {
            push_back(*i);
        }
    }

    Node* find_last()
    {
        Node* i = head;
        for(; i->next != nullptr; i = i->next);
        return i;
    }

    void push_back( const T& value )
    {
        Node* temp = find_last();
        temp->next = new Node(value, temp);
        ++m_size;
    }

    void push_back( T&& value )
    {
        Node* temp = find_last();
        temp->next = new Node(std::move(value), temp);
        ++m_size;
    }

    iterator begin() noexcept
    {
        return iterator(head->next);
    }

    reverse_iterator rbegin() noexcept
    {
        return reverse_iterator(find_last());
    }

    iterator end() noexcept
    {
        return iterator(find_last());
    }

    reverse_iterator rend() noexcept
    {
        return reverse_iterator(head);
    }

    void push_front( const T& value )
    {
        Node* temp = head;
        head = new Node(0, nullptr, temp);
        head->next->prev = head;
        temp->value = value;
        ++m_size;
    }

    void push_front( T&& value )
    {
        Node* temp = head;
        head = new Node(0,nullptr, temp);
        head->next->prev = head;
        temp->value = std::move(value);
        ++m_size;
    }

    void pop_back()
    {
        Node* temp = find_last();
        temp->prev->next = nullptr;
        delete temp;
        --m_size;
    }

    void pop_front()
    {
        Node* temp = head->next->next;
        delete head->next;
        head->next = temp;
        --m_size;
    }

    size_type size() const noexcept
    {
        return m_size;
    }

    void sort()
    {
        for(int i = 0; i != m_size; ++i)
        {
            for(auto j = begin()+1; j != end(); ++ j)
            {
                if(*j > *(j - 1))
                {
                    std::iter_swap(j, j-1);
                }
            }
        }
    }

};

#endif // LIST_H
