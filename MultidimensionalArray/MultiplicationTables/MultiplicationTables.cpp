// MultiplicationTables.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	constexpr int numRows{ 10 };
	constexpr int numCols{ 10 };

	// Declare an array of 10x10
	int product[numRows][numCols]{};

	// Get a multiplication table
	for (int row{ 1 }; row < numRows; ++row)
	{
		for (int col{ 1 }; col < numCols; ++col)
		{
			product[row][col] = row * col;
		}
	}

	// Print the table
	for (int row{ 1 }; row < numRows; ++row)
	{
		for (int col{ 1 }; col < numCols; ++col)
		{
			std::cout << product[row][col] << '\t';
		}

		std::cout << '\n';
	}

	return 0;
}
