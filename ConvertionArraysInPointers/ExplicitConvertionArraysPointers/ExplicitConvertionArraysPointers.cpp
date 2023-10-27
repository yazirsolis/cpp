// ExplicitConvertionArraysPointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int array[5]{ 8, 2, 5, 6, 1 };
    std::cout << *array << "\n"; // will print 8

    int* ptr{ array }; // Explicit creation of a pointer, with "ptr" name to our array.
    std::cout << *ptr << "\n"; // will print 8

    return 0;
}
