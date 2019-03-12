#ifndef STL_VECTOR_H
#define STL_VECTOR_H
#include <memory>
/*
template <class T, class Allocator = std::allocator<T>>
struct vector_base {

    using pointer = typename std::allocator_traits<Allocator>::pointer;

    struct vector_impl {
        pointer m_start;
        pointer m_finish;
        pointer m_end_of_storage;
        vector_impl() = default;
    };

    vector_impl m_impl;
    vector_base() = default;
    pointer m_allocate(size_t n)
    {
        return Allocator::allocate(n);
    }
};

template <class T, class Allocator = std::allocator<T>>
class vector:vector_base<T, Allocator> {
    using value_type = T;
    using allocator_type = Allocator;
    using size_type = std::size_t;
    using difference_type = std::ptrdiff_t;
    using reference = value_type&;
    using const_reference = value_type&;
    using const_pointer = typename std::allocator_traits<Allocator>::const_pointer;
    using iterator = value_type*;
    // using const_iterator =
    using reverse_iterator = std::reverse_iterator<iterator>;
    // using const_reverse_iterator =
};
*/
#endif // STL_VECTOR_H
