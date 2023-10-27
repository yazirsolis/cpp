// ConvertionArraysInPointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    setlocale(LC_ALL, "es_ES.UTF-8");
    
    int array[5]{ 8, 2, 5, 6, 1 };

    // Print pointer value in which the array decay
    std::cout << "The array decay in a pointer which contains next memory address: " << array << "\n";

    // Print memory address of first element in the array
    // Using direction operator to memory address of a object
    std::cout << "Element 0 has next memory address: " << &array[0] << "\n";

    return 0;
}