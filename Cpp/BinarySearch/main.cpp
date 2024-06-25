#include "binary_search.hpp"
#include "input.hpp"
#include "numbers_data.hpp"

#include <iostream>

int main()
{
    std::vector< int > numbersData = getNumbersData();

    const int numberToSearch = getInputNumber( "Enter the number to search: " );

    const size_t index = binarySearch( numbersData, numberToSearch );
    if( index != -1 )
    {
        std::cout << "Element " << numberToSearch << " is at position number " << index << " in the vector.\n";
    }
    else
    {
        std::cout << "Element " << numberToSearch << " is not in the vector.\n";
    }

    return 0;
}
