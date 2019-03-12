#include <QCoreApplication>
#include <iostream>

template <class T>
struct is_pointer
{
    bool value = false;
};

template <class T>
struct is_pointer<T*>
{
    bool value = true;
};

template <int value>
struct Factorial
{
    static const int b = value * Factorial<value - 1>::b;
};

template <>
struct Factorial<0>
{
   static const int b = 1;
};

int factorial(int value)
{
    if(value == 0)
    {
        return 1;
    }
    return value * factorial(value - 1);
}

template <class T>
struct Sum
{
    T operator()(T a, T b)
    {
        return a + b;
    }
};

template <>
struct Sum<int>
{
    int operator()(int a, int b)
    {
        std::cout << "Hello World" << std::endl;
        return a + b;
    }
};

template <class T>
struct Sub
{
    T operator()(T a, T b)
    {
        return a - b;
    }
};

template <>
struct Sub<int>
{
    int operator()(int a, int b)
    {
        std::cout << "Hello World" << std::endl;
        return a - b;
    }
};

template <int a>
struct Test
{
  Test()
  {
      std::cout << a << std::endl;
  }
  void operator()()
  {
      std::cout << "gg" << std::endl;
  }
};

template <>
struct Test<100>
{
  Test()
  {
      std::cout << "error" << std::endl;
  }
  void operator()()
  {
       std::cout << "gg" << std::endl;
  }
};

int gcd(int a, int b)
{
    if(a % b == 0)
    {
        return b;
    }
    return gcd(b, a % b);
}

int fibonacci(int n)
 {
     if(n == 1 || n == 2)
     {
         return 1;
     }

     if(n == 0)
     {
         return 0;
     }

    return f(n - 1) + f(n - 2);

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Factorial<5> factorial1;
    std::cout << factorial1.b << std::endl;
    std::cout << factorial(5) << std::endl;
    Sum<int> sum;
    Sum<double> sum1;
    Sub<int> sub;
    Test<100> test;
    Test<101> test1;
    std::cout << sum(2, 4) << std::endl;
    std::cout << sum1(2.2, 4.9) << std::endl;
    std::cout << sub(4, 2) << std::endl;
    test();
    test1();
    std::cout << std::endl;
    std::cout << gcd(10, 20) << " ";
    return a.exec();
}
