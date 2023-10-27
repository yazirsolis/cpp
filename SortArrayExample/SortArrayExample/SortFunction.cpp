#include <algorithm>
#include <iostream>
#include <iterator>

int main()
{
    int array[]{ 30, 50, 20, 10, 40 };
    
    std::sort(std::begin(array), std::end(array));

    for (int index{ 0 }; index < static_cast<int>(std::size(array)); ++index) {
        std::cout << array[index] << ' ';
    }

    std::cout << '\n';

}