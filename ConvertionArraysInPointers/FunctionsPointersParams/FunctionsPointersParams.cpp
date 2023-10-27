// FunctionsPointersParams.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void printSize(int* array) {
    // array is take as a pointer here
    std::cout << sizeof(array) << "\n"; // print the size of the pointer, not the size of the array
    std::cout << &array << "\n";
}

int main()
{
    int array[]{ 4, 3, 1, 1, 8, 3, 24, 19 };
    std::cout << sizeof(array) << '\n'; // print sizeof(int) * length
    std::cout << &array << "\n";

    printSize(array); // the argument array decay to a pointer here

    return 0;
}
