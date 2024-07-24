#include "output.hpp"

#include "gtest/gtest.h"

#include <iostream>
#include <sstream>
#include <string>

std::string captureOutput( const std::vector< int >& vec, const std::string& message )
{
    std::ostringstream oss;
    std::streambuf* pCoutStreamBuf = std::cout.rdbuf();
    std::cout.rdbuf( oss.rdbuf() );

    printResult( vec, message );

    std::cout.rdbuf( pCoutStreamBuf );

    return oss.str();
}

TEST( PrintResultTest, EmptyVector )
{
    // Given
    std::vector< int > vec;
    std::string message = "Empty vector:";

    std::string expectedResult = "Empty vector:\n\n";

    // When
    std::string result = captureOutput( vec, message );

    // Then
    EXPECT_EQ( result, expectedResult );
}

TEST( PrintResultTest, SingleElementVector )
{
    // Given
    std::vector< int > vec{ 42 };
    std::string message = "Single element:";

    std::string expectedResult = "Single element:\n42, \n";

    // When
    std::string result = captureOutput( vec, message );

    // Then
    EXPECT_EQ( result, expectedResult );
}

TEST( PrintResultTest, MultipleElementsVector )
{
    // Given
    std::vector< int > vec{ 42, 38, 16, 31, -3 };
    std::string message = "Multiple elements:";

    std::string expectedResult = "Multiple elements:\n42, 38, 16, 31, -3, \n";

    // When
    std::string result = captureOutput( vec, message );

    // Then
    EXPECT_EQ( result, expectedResult );
}
