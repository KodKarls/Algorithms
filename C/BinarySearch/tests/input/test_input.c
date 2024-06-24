#include "unity.h"

#include "input.h"

#include <stdlib.h>

void test_getInputString();

void setUp()
{
    // Empty body
}

void tearDown()
{
    // Empty body
}

void test_getInputString()
{
    const char* prompt = "Enter a string: ";
    const char* expectedInput = "testinput";
    int maxSize = 20;

    FILE* inputFile = fopen( "test_input.txt", "w" );
    fprintf( inputFile, "%s\n", expectedInput );
    fclose( inputFile );

    freopen( "test_input.txt", "r", stdin );

    // When
    char* result = getInputString( prompt, maxSize );

    // Then
    TEST_ASSERT_NOT_NULL( result );
    TEST_ASSERT_EQUAL_STRING( expectedInput, result );

    free( result );

    freopen( "/dev/tty", "r", stdin );
}

int main( void )
{
    UNITY_BEGIN();

    RUN_TEST( test_getInputString );

    return UNITY_END();
}
