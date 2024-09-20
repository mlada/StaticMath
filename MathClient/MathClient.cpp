//MathClient.cpp
#include <string>
#include <iostream>
#include "MathLibrary.h"
#include <list>

int main()
{
    std::list<int> a { 7, 3, 4, 1, 8 };
    std::list<int> b { 0, 1, 2, 0, 0 };
    std::list<double> c { 1.34, 3.5, 4, 0, 8.5 };

    std::cout << "multiplication of non-zero components of array a, whose indexes are stored in array b = " <<
        MathLibrary::Arithmetic::Func1(a, b) << std::endl;
    
    std::cout << "minimum element and index a = " <<
        MathLibrary::Arithmetic::Func2(a) << std::endl;

    std::cout << "reverse a = " <<
        MathLibrary::Arithmetic::Func3(c) << std::endl;

    return 0;
}