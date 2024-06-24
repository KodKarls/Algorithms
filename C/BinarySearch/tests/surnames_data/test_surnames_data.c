#include "unity.h"

#include "surnames_data.h"

void test_initializeSurnamesData();
void test_freeSurnamesData();

void setUp()
{
    // Empty body
}

void tearDown()
{
    // Empty body
}

void test_initializeSurnamesData()
{
    // Given
    SurnamesData surnamesData;

    // When
    surnamesData = initializeSurnamesData();

    // Then
    TEST_ASSERT_EQUAL_INT( 20, surnamesData.numberOfSurnames );

    const char* expectedSurnames[] = {
            "Anderson", "Baker", "Bennett", "Brown", "Clark", "Davis","Edwards",
            "Evans", "Green", "Harris", "Jackson", "Johnson","Lewis", "Martin",
            "Moore", "Robinson", "Smith", "Taylor","Thomas", "Wilson" };

    for( int i = 0; i < surnamesData.numberOfSurnames; ++i )
    {
        TEST_ASSERT_EQUAL_STRING( expectedSurnames[ i ], surnamesData.surnames[ i ] );
    }

    freeSurnamesData( &surnamesData );
}

void test_freeSurnamesData()
{
    // Given
    SurnamesData surnamesData = initializeSurnamesData();

    // When
    freeSurnamesData( &surnamesData );

    // Then
    TEST_ASSERT_NULL( surnamesData.surnames );
}

int main( void )
{
    UNITY_BEGIN();

    RUN_TEST( test_initializeSurnamesData );
    RUN_TEST( test_freeSurnamesData );

    return UNITY_END();
}
