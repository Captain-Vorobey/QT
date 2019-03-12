#ifndef FUCKREALITY_H_INCLUDED
#define FUCKREALITY_H_INCLUDED
namespace stu
{


template <int a, int b>
int sum()
{
    return a + b;
}

template <int a, int b, int c>
int sum()
{
    std::cout << "vorobey anything ";
    return a + b + c;
}

template <class T>
struct is_pointer
{
  static const bool value = false;
};

template <class T>
struct is_pointer<T*>
{
  static const bool value = true;
};

template <int n>
struct GreatFuckingReality
{
    static const int value = n * GreatFuckingReality<n - 1>::value;

};

template <>
struct GreatFuckingReality<1>
{
    static const int value = 1;

};

template <>
struct GreatFuckingReality<0>
{
    static const int value = 1;

};

}

#endif // FUCKREALITY_H_INCLUDED
