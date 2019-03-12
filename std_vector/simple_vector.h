#ifndef SIMPLE_VECTOR_H
#define SIMPLE_VECTOR_H
#include <memory>
#include <algorithm>
#include <initializer_list>
#include <stdexcept>

// bubble_sort. Кол всем, кто не напишет
// линейный поиск. Также
// count, count_if
//

template <class T>
struct vector {
    using value_type = T;
    using size_type = std::size_t;
    using difference_type = std::ptrdiff_t;
    using reference = value_type&;
    using const_reference = value_type&;
    using pointer = value_type*;
    using const_pointer = const value_type*;
    using iterator = value_type*;
    using const_iterator = const_pointer;
    using reverse_iterator = std::reverse_iterator<iterator>;
    using const_reverse_iterator = std::reverse_iterator<const_iterator>;

    struct vector_impl {
        pointer m_storage;
        size_type m_size = 0;
        size_type m_capacity = 2;

        vector_impl(): m_storage(new value_type[m_capacity]){}
        vector_impl(size_type s, size_type c): m_size(s), m_capacity(c), m_storage(new value_type[m_capacity]){}
        void reallocate()
        {
            pointer temp = new value_type[m_capacity];
            std::copy(m_storage, m_storage + m_size, temp);
            delete [] m_storage;
            m_storage = temp;
        }

        void m_push_back(value_type value)
        {
            if(m_size == m_capacity)
            {
                m_capacity *= 2;
                reallocate();
            }

            m_storage[m_size++] = value;
        }

    } m_v_impl;

    void push_back(value_type value);
    vector() = default;
    vector(size_type size): m_v_impl(size, size * 2){}
    vector(std::initializer_list<value_type> l)
    {
        for(auto i = l.begin(); i != l.end(); ++i)
        {
            push_back(*i);
        }
    }

    pointer begin();
    pointer end();
    reference operator[](size_type index);
    reference at(size_type index);
    reference front();
    reference back();
    bool empty();
    size_type m_size(size_type m_size);
    size_type max_m_size(size_type m_size);
};

template<class T>
void vector<T>::push_back(T value)
{
     m_v_impl.m_push_back(value);
}

template<class T>
typename vector<T>::pointer vector<T>::begin()
{
    return m_v_impl.m_storage;
}

template<class T>
typename vector<T>::pointer vector<T>::end()
{
    return m_v_impl.m_storage + m_v_impl.m_size;
}

template<class T>
typename vector<T>::reference vector<T>::operator[](vector<T>::size_type index)
{
    return m_v_impl.m_storage[index];
}

template<class T>
typename vector<T>::reference vector<T>::at(vector<T>::size_type index)
{
    if(m_v_impl.m_size <= index)
    {
        throw std::out_of_range("error");
    }

    return m_v_impl.m_storage[index];
}

template<class T>
typename vector<T>::reference vector<T>::front()
{
    return m_v_impl.m_storage[0];
}

template<class T>
typename vector<T>::reference vector<T>::back()
{
    return m_v_impl.m_storage[m_size - 1];
}

template<class T>
bool vector<T>::empty()
{
    return m_v_impl.m_size == 0;
}

template<class T>
typename vector<T>::size_type vector<T>::m_size(vector<T>::size_type m_size)
{
    return  m_v_impl.m_size;
}

template<class T>
typename vector<T>::size_type vector<T>::max_m_size(vector<T>::size_type m_size)
{
    return m_v_impl.max_m_size;
}

#endif // SIMPLE_VECTOR_H

