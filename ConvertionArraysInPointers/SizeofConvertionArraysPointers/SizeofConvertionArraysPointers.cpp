// SizeofConvertionArraysPointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int array[5]{ 8, 2, 5, 6, 1 };
    
    std::cout << sizeof(array) << '\n'; // will print sizeof(int) * array length

    int* ptr{ array };
    std::cout << sizeof(ptr) << "\n"; // will print size of the pointer
}
