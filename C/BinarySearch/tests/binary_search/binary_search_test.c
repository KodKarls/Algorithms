#include "unity.h"

#include "binary_search.h"

void test_binarySearchFound();
void test_binarySearchNotFound();
void test_binarySearchEmptyArray();
void test_binarySearchSingleElement();

void setUp( void )
{
    // Empty body
}

void tearDown( void )
{
    // Empty body
}

void test_binarySearchFound()
{
    // Given
    char* surnames[] = {
            "Anderson", "Baker", "Bennett", "Brown", "Clark", "Davis","Edwards", "Evans",
            "Green", "Harris", "Jackson", "Johnson","Lewis", "Martin", "Moore",
            "Robinson", "Smith", "Taylor","Thomas", "Wilson"
    };
    int size = sizeof( surnames ) / sizeof( surnames[ 0 ] );

    // When
    int firstResult = binarySearch( surnames, size, "Anderson" );
    int secondResult = binarySearch( surnames, size, "Wilson" );
    int thirdResult = binarySearch( surnames, size, "Jackson" );

    // Then
    TEST_ASSERT_EQUAL_INT( 0, firstResult );
    TEST_ASSERT_EQUAL_INT( 19, secondResult );
    TEST_ASSERT_EQUAL_INT( 10, thirdResult );
}

void test_binarySearchNotFound()
{
    // Given
    char* surnames[] = {
            "Anderson", "Baker", "Bennett", "Brown", "Clark", "Davis","Edwards", "Evans",
            "Green", "Harris", "Jackson", "Johnson","Lewis", "Martin", "Moore",
            "Robinson", "Smith", "Taylor","Thomas", "Wilson"
    };
    int size = sizeof( surnames ) / sizeof( surnames[ 0 ] );

    // When
    int firstResult = binarySearch( surnames, size, "Willy" );
    int secondResult = binarySearch( surnames, size, "Zebra" );
    int thirdResult = binarySearch( surnames, size, "Justin" );

    // Then
    TEST_ASSERT_EQUAL_INT( -1, firstResult );
    TEST_ASSERT_EQUAL_INT( -1, secondResult );
    TEST_ASSERT_EQUAL_INT( -1, thirdResult );
}

void test_binarySearchEmptyArray()
{
    // Given
    char** surnames = NULL;
    int size = 0;

    // When
    int result = binarySearch( surnames, size, "Zebra" );

    // Then
    TEST_ASSERT_EQUAL_INT( -1, result );
}

void test_binarySearchSingleElement()
{
    // Given
    char* surnames[] = { "Single" };
    int size = 1;

    // When
    int firstResult = binarySearch( surnames, size, "Zebra" );
    int secondResult = binarySearch( surnames, size, "Single" );
    int thirdResult = binarySearch( surnames, size, "Justin" );

    // Then
    TEST_ASSERT_EQUAL_INT( -1, firstResult );
    TEST_ASSERT_EQUAL_INT( 0, secondResult );
    TEST_ASSERT_EQUAL_INT( -1, thirdResult );
}

int main(void)
{
    UNITY_BEGIN();

    RUN_TEST( test_binarySearchFound );
    RUN_TEST( test_binarySearchNotFound );
    RUN_TEST( test_binarySearchEmptyArray );
    RUN_TEST( test_binarySearchSingleElement );

    return UNITY_END();
}
