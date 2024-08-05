#include "unity.h"

#include "selection_sort.h"

/* Help functions */
// ================================================================
void compareArrays( int* arr1, int* arr2, int size )
{
    for( int i = 0; i < size; ++i )
    {
        TEST_ASSERT_EQUAL_INT( arr1[ i ], arr2[ i ] );
    }
}
// ================================================================

void test_selectionSort( void )
{
    // Given
    NumbersData inputData;
    NumbersData sortedData;

    int inputNumbers[] = { 64, 25, 12, 22, 11 };
    int expectedNumbers[] = { 11, 12, 22, 25, 64 };
    int size = sizeof( inputNumbers ) / sizeof( inputNumbers[ 0 ] );

    inputData.numbers = inputNumbers;
    inputData.size = size;

    // When
    sortedData = selectionSort( &inputData );

    // Then
    compareArrays( expectedNumbers, sortedData.numbers, size );

    freeNumbersData( &sortedData );
}

void test_findSmallestIndex( void )
{
    // Given
    NumbersData numbersData;
    int numbers[] = { 4, 2, 5, 1, 3 };
    int expectedIndex = 3;
    int size = sizeof( numbers ) / sizeof( numbers[ 0 ] );

    numbersData.numbers = numbers;
    numbersData.size = size;

    // When
    unsigned int smallestIndex = findSmallestIndex( numbersData, 0 );

    TEST_ASSERT_EQUAL_UINT( expectedIndex, smallestIndex );
}

void test_swap( void )
{
    // Given
    int a = 5;
    int b = 10;

    // When
    swap( &a, &b );

    // Then
    TEST_ASSERT_EQUAL_INT( 10, a );
    TEST_ASSERT_EQUAL_INT( 5, b );
}
