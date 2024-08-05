#include "numbers_data.h"

#include <malloc.h>
#include <stdio.h>

NumbersData initializeNumbersData()
{
    NumbersData numbersData;

    int numbers[] = { 93, 15, 17, 20, 24, 27, 2, 38, 13, 49,
                     35, 58, 41, 68, 8, 79, 84, 87, 12, 15
    };
    int sizeOfNumbers = sizeof( numbers ) / sizeof( numbers[ 0 ] );

    numbersData.numbers = ( int* )malloc( sizeOfNumbers * sizeof( int ) );
    checkMemoryAllocation( numbersData.numbers );

    for( int i = 0; i < sizeOfNumbers; ++i )
    {
        numbersData.numbers[ i ] = numbers[ i ];
    }

    numbersData.size = sizeOfNumbers;

    return numbersData;
}

NumbersData copyNumbersData( const NumbersData* original )
{
    NumbersData result;

    result.size = original->size;
    result.numbers = ( int* )malloc( result.size * sizeof( int ) );
    checkMemoryAllocation( result.numbers );

    for( int i = 0; i < result.size; ++i )
    {
        result.numbers[ i ] = original->numbers[ i ];
    }

    return result;
}

void checkMemoryAllocation( void* ptr )
{
    if( ptr == NULL )
    {
        fprintf( stderr, "Memory allocation error.\n" );
        exit( EXIT_FAILURE );
    }
}

void freeNumbersData( NumbersData* numbersData )
{
    free( numbersData->numbers );
    numbersData->numbers = NULL;
}
