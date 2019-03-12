#ifndef ARRAY_H
#define ARRAY_H
#include <iterator>
#include <vector>

template <class T, std::size_t N>
struct array_traits
{
    typedef T Type[N];
    static T&
    S_ref(const Type& arr, std::size_t n) noexcept
    { return const_cast<T&>(arr[n]); }

    static T*
    S_ptr(const Type& __t) noexcept
    { return const_cast<T*>(__t); }
};

template <class T, std::size_t N>
struct array
{
    typedef T                                       value_type;
    typedef value_type*                             pointer;
    typedef const value_type*                       const_pointer;
    typedef value_type&                             reference;
    typedef value_type*                             iterator;
    typedef const value_type*                       const_iterator;
    typedef std::size_t                             size_type;
    typedef std::ptrdiff_t                          difference_type;
    typedef std::reverse_iterator<iterator>         reverse_iterator;
    typedef std::reverse_iterator<const_iterator>   const_reverse_iterator;
    typedef array_traits<T,N> AT_Type;
    typename AT_Type::Type m_element;
};

#endif // ARRAY_H
