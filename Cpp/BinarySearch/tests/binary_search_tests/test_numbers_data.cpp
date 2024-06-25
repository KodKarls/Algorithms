#include "numbers_data.hpp"

#include "gtest/gtest.h"

class NumbersDataTest : public testing::Test
{
    // Empty body.
};

TEST_F( NumbersDataTest, CorrectSize )
{
    // Given
    int expectedSize = 20;

    // When
    std::vector< int > data = getNumbersData();

    // Then
    EXPECT_EQ( data.size(), expectedSize );
}

TEST_F( NumbersDataTest, CorrectValues )
{
    // Given
    std::vector< int > expected = {
            12, 15, 17, 20, 24, 27, 31, 38, 42, 49,
            55, 58, 63, 68, 76, 79, 84, 87, 93, 95
    };

    // When
    std::vector< int > data = getNumbersData();

    // Then
    EXPECT_EQ( data, expected );
}
