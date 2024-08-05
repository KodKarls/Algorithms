#include "selection_sort.hpp"

#include "gtest/gtest.h"

TEST( FindSmallesIndexTest, SingleElementVector )
{
    // Given
    std::vector< int > vec{ 42 };
    unsigned int expectedResult = 0;

    // When
    unsigned int result = findSmallestIndex( vec );

    // Then
    EXPECT_EQ( result, expectedResult );
}

TEST( FindSmallesIndexTest, MultipleElementsVector )
{
    // Given
    std::vector< int > vec{ 10, 20, 5, 15 };
    unsigned int expectedResult = 2;

    // When
    unsigned int result = findSmallestIndex( vec );

    // Then
    EXPECT_EQ( result, expectedResult );
}

TEST( FindSmallesIndexTest, AllElementsEqualVector )
{
    // Given
    std::vector< int > vec{ 2, 2, 2, 2 };
    unsigned int expectedResult = 0;

    // When
    unsigned int result = findSmallestIndex( vec );

    // Then
    EXPECT_EQ( result, expectedResult );
}

TEST( SelectionSortTest, SingleElementVector )
{
    // Given
    std::vector< int > vec{ 42 };
    std::vector< int > expectedResult = { 42 };

    // When
    std::vector< int > result = selectionSort( vec );

    // Then
    EXPECT_EQ( result, expectedResult );
}

TEST( SelectionSortTest, MultipleElementsVector )
{
    // Given
    std::vector< int > vec{ 10, 20, 5, 15 };
    std::vector< int > expectedResult = { 5, 10, 15, 20 };

    // When
    std::vector< int > result = selectionSort( vec );

    // Then
    EXPECT_EQ( result, expectedResult );
}

TEST( SelectionSortTest, AlreadySortedVector )
{
    // Given
    std::vector< int > vec{ 1, 2, 3, 4, 5 };
    std::vector< int > expectedResult = { 1, 2, 3, 4, 5 };

    // When
    std::vector< int > result = selectionSort( vec );

    // Then
    EXPECT_EQ( result, expectedResult );
}

TEST( SelectionSortTest, ReverseSortedVector )
{
    // Given
    std::vector< int > vec{ 5, 4, 3, 2, 1 };
    std::vector< int > expectedResult = { 1, 2, 3, 4, 5 };

    // When
    std::vector< int > result = selectionSort( vec );

    // Then
    EXPECT_EQ( result, expectedResult );
}
