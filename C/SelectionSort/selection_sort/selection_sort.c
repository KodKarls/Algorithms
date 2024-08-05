#include "selection_sort.h"

#include <stdio.h>

NumbersData selectionSort( const NumbersData* numbersData )
{
    NumbersData result = copyNumbersData( numbersData );

    for( unsigned int i = 0; i < result.size; ++i )
    {
        unsigned int smallestIndex = findSmallestIndex( result, i );
        swap( &result.numbers[ i ], &result.numbers[ smallestIndex ] );
    }

    return result;
}

unsigned int findSmallestIndex( const NumbersData numbersData, const unsigned int start )
{
    unsigned int smallestIndex = start;
    int smallest = numbersData.numbers[ start ];

    for( unsigned int i = start + 1; i < numbersData.size; ++i )
    {
        if( numbersData.numbers[ i ] < smallest )
        {
            smallest = numbersData.numbers[ i ];
            smallestIndex = i;
        }
    }

    return smallestIndex;
}

void swap( int* a, int* b )
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printResult( NumbersData numbersData, const char* message )
{
    printf( "%s\n", message );
    for( int i = 0; i < numbersData.size; ++i )
    {
        printf( "%d ", numbersData.numbers[ i ] );
    }
    printf( "\n" );
}
