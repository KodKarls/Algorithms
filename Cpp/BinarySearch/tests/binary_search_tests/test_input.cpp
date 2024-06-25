#include "input.hpp"

#include "gtest/gtest.h"

#include <sstream>
#include <string>

class InputTest : public testing::Test
{
protected:
    void SetUp() override
    {
        oldCin = std::cin.rdbuf( inputBuffer.rdbuf() );
        oldCout = std::cout.rdbuf( outputBuffer.rdbuf() );
    }

    void TearDown() override
    {
        std::cin.rdbuf( oldCin );
        std::cout.rdbuf( oldCout );
    }

    std::stringstream inputBuffer;
    std::stringstream outputBuffer;

    std::streambuf* oldCin{};
    std::streambuf* oldCout{};
};

TEST_F( InputTest, ReturnCorrectNumber )
{
    // Given
    std::string prompt = "Enter a number: ";
    int expectedNumber = 42;

    inputBuffer << expectedNumber;

    // When
    int result = getInputNumber( prompt );

    // Then
    EXPECT_EQ( result, expectedNumber );

    std::string output = outputBuffer.str();
    EXPECT_EQ( output, prompt );
}

TEST_F( InputTest, HandleInvalidInput )
{
    // Given
    std::string prompt = "Enter a number: ";
    std::string invalidInput = "abc";
    int expectedNumber = 42;

    inputBuffer.str( invalidInput + "\n" + std::to_string( expectedNumber ) );

    // When
    int result = getInputNumber( prompt );

    // Then
    EXPECT_EQ( result, expectedNumber );

    std::string output = outputBuffer.str();
    EXPECT_EQ( output, prompt + "Invalid input. Please enter a number.\n" + prompt );
}
