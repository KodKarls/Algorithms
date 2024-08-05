#include "unity.h"

// Definitions are in numbers_data_test.c file
extern void test_initializeNumbersData( void );
extern void test_copyNumbersData( void );
extern void test_freeNumbersData( void );

// Definitions are in selection_sort_test.c file
extern void test_selectionSort( void );
extern void test_findSmallestIndex( void );
extern void test_swap( void );

int main( void )
{
    UNITY_BEGIN();

    RUN_TEST( test_initializeNumbersData );
    RUN_TEST( test_copyNumbersData );
    RUN_TEST( test_freeNumbersData );

    RUN_TEST( test_selectionSort );
    RUN_TEST( test_findSmallestIndex );
    RUN_TEST( test_swap );

    return UNITY_END();
}
