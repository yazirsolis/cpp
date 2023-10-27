// SortArrayExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iterator>
#include <utility>

int main()
{
    int array[]{ 30, 50, 20, 10, 40 };
    constexpr int longitude{ static_cast<int>(std::size(array)) };

    // Loop each element in the array
    // (exception with last one, that is already sorted when we loop there)
    for (int startIndex{ 0 }; startIndex < longitude; ++startIndex) {
        // minorIndex is the element index smallest found in this iteration
        // Start guessing the smallest element is the first element in this iteration.
        int minorIndex{ startIndex };

        // Then searching for the smallest element in the rest of the array
        for (int currentIndex{ startIndex + 1 }; currentIndex < longitude; ++currentIndex) {
            // If we find an element which is the smallest than the last one smallest found.
            if (array[currentIndex] < array[minorIndex])
                // Then we follow up
                minorIndex = currentIndex;
        }

        // minorIndex is now the smallest element in the rest of the array
        // Switching our start element with the smallest element (this sort it in the correct place)
        std::swap(array[startIndex], array[minorIndex]);
    }

    // Now that all array is already sorted, print our array sorted to test that is working.
    for (int index{ 0 }; index < longitude; ++index) {
        std::cout << array[index] << ' ';
    }

    std::cout << '\n';
    
}