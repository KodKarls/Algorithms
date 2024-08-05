#include "numbers_data.h"
#include "selection_sort.h"

int main( void )
{
    NumbersData numbersData = initializeNumbersData();

    printResult( numbersData, "Numbers before sorting:" );

    NumbersData sortedData = selectionSort( &numbersData );

    printResult( sortedData, "Numbers after sorting:" );

    freeNumbersData( &numbersData );
    freeNumbersData( &sortedData );

    return 0;
}
