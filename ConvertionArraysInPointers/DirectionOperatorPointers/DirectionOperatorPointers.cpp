// DirectionOperatorPointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int array[5]{ 8, 2, 5, 6, 1 };
    std::cout << array << '\n'; // type int[5], print 000000758EBBFA28
    std::cout << &array << '\n'; // type int(*)[5], print 000000758EBBFA28

    std::cout << "\n";

    int* ptr{ array };
    std::cout << ptr << '\n'; // type int*, print 000000758EBBFA28
    std::cout << &ptr << '\n'; // type int**, print 000000758EBBFA58
}
