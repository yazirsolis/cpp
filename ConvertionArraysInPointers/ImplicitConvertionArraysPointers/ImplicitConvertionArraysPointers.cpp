// ImplicitConvertionArraysPointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int array[5]{ 8, 2, 5, 6, 1 };

    // Use of indirection operator through an array return the value of the first element (element 0)
    std::cout << *array << "\n"; // will print 8

    char name[]{ "Juan" }; // C-style string (also an array)
    std::cout << *name << "\n"; // will print 'J'

    return 0;
}