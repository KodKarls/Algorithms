#include "numbers_data.hpp"
#include "output.hpp"
#include "selection_sort.hpp"

int main()
{
    std::vector< int > numbers = getNumbersData();

    printResult( numbers, "Numbers before sorting:" );

    std::vector< int > sortedNumbers = selectionSort( numbers );

    printResult( sortedNumbers, "Numbers after sorting:" );

    return 0;
}
