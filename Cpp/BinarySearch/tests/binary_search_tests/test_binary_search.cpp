#include "binary_search.hpp"

#include "gtest/gtest.h"

class BinarySearchTest : public testing::Test
{
    // Empty body.
};

TEST_F( BinarySearchTest, FindElementInMiddle )
{
    // Given
    std::vector< int > vec = { 12, 15, 17, 20, 24, 27, 31, 38, 42, 49 };
    int target = 24;
    int expectedIndex = 4;

    // When
    int result = binarySearch( vec, target );

    // Then
    EXPECT_EQ( result, expectedIndex );
}

TEST_F( BinarySearchTest, FindElementAtStart )
{
    // Given
    std::vector< int > vec = { 12, 15, 17, 20, 24, 27, 31, 38, 42, 49 };
    int target = 12;
    int expectedIndex = 0;

    // When
    int result = binarySearch( vec, target );

    // Then
    EXPECT_EQ( result, expectedIndex );
}

TEST_F( BinarySearchTest, FindElementAtEnd )
{
    // Given
    std::vector< int > vec = { 12, 15, 17, 20, 24, 27, 31, 38, 42, 49 };
    int target = 49;
    int expectedIndex = 9;

    // When
    int result = binarySearch( vec, target );

    // Then
    EXPECT_EQ( result, expectedIndex );
}

TEST_F( BinarySearchTest, ElementNotFound )
{
    // Given
    std::vector< int > vec = { 12, 15, 17, 20, 24, 27, 31, 38, 42, 49 };
    int target = 33;
    int expectedIndex = -1;

    // When
    int result = binarySearch( vec, target );

    // Then
    EXPECT_EQ( result, expectedIndex );
}

TEST_F( BinarySearchTest, HandleEmptyVector )
{
    // Given
    std::vector< int > vec = {};
    int target = 1;
    int expectedIndex = -1;

    // When
    int result = binarySearch( vec, target );

    // Then
    EXPECT_EQ( result, expectedIndex );
}

TEST_F( BinarySearchTest, FindElementInSingleElementVector )
{
    // Given
    std::vector< int > vec = { 19 };
    int target = 19;
    int expectedIndex = 0;

    // When
    int result = binarySearch( vec, target );

    // Then
    EXPECT_EQ( result, expectedIndex );
}

TEST_F( BinarySearchTest, ElementInSingleElementVectorNotFound )
{
    // Given
    std::vector< int > vec = { 19 };
    int target = 21;
    int expectedIndex = -1;

    // When
    int result = binarySearch( vec, target );

    // Then
    EXPECT_EQ( result, expectedIndex );
}
