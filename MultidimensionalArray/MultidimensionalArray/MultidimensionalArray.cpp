// MultidimensionalArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int array[3][5]
    {
        { 1, 2, 3, 4, 5 }, // row 0
        { 6, 7, 8, 9, 10 }, // row 1
        { 11, 12, 13, 14, 15} // row 2
    };

    int numRows{ 3 };
    int numCols{ 5 };

    for (int row{ 0 }; row < numRows; ++row) // looping through rows in the array
    { 
        std::cout << "Row: " << row << "\n";

        for (int col{ 0 }; col < numCols; ++col) // looping through each column in the row
        {
            std::cout << array[row][col] << "\n";
        }
    }
}