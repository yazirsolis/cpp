// TridimensionalArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	// Initialize array with three dimensions
	int array[2][3][2]
	{
		{ {0,1}, {2,3}, {4,5} },
		{ {6,7}, {8,9}, {10, 11} }
	};

	// Print the value of each element
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			for (int k = 0; k < 2; ++k)
			{
				std::cout << "Element in x[" << i << "][" << j << "][" << k << "] = " << array[i][j][k] << std::endl;
			}
		}
	}

	return 0;
}