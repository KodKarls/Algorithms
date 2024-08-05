#include "unity.h"

#include "numbers_data.h"

void setUp( void )
{
    // Empty body
}

void tearDown( void )
{
    // Empty body
}

void test_initializeNumbersData( void )
{
    // Given
    int expectedNumbers[] = {
        93, 15, 17, 20, 24, 27, 2, 38, 13, 49,
        35, 58, 41, 68, 8, 79, 84, 87, 12, 15
    };
    int expectedSize = sizeof( expectedNumbers ) / sizeof( expectedNumbers[ 0 ] );

    // When
    NumbersData numbersData = initializeNumbersData();

    // Then
    TEST_ASSERT_EQUAL_INT( expectedSize, numbersData.size );
    for( int i = 0; i < expectedSize; ++i )
    {
        TEST_ASSERT_EQUAL_INT( expectedNumbers[ i ], numbersData.numbers[ i ] );
    }

    freeNumbersData( &numbersData );
}

void test_copyNumbersData( void )
{
    // Given
    NumbersData original = initializeNumbersData();

    // When
    NumbersData copy = copyNumbersData( &original );

    // Then
    TEST_ASSERT_EQUAL_INT( original.size, copy.size );
    for( int i = 0; i < original.size; ++i )
    {
        TEST_ASSERT_EQUAL_INT( original.numbers[ i ], copy.numbers[ i ] );
    }

    TEST_ASSERT_NOT_EQUAL( original.numbers, copy.numbers );

    freeNumbersData( &original );
    freeNumbersData( &copy );
}

void test_freeNumbersData( void )
{
    // Given
    NumbersData numbersData = initializeNumbersData();

    // When / Then
    TEST_ASSERT_NOT_NULL( numbersData.numbers );
    freeNumbersData( &numbersData );
    TEST_ASSERT_NULL( numbersData.numbers );
}