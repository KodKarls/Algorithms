#include "input.hpp"

#include <iostream>
#include <limits>

int getInputNumber( const std::string& prompt )
{
    int searchNumber = 0;

    while( true )
    {
        std::cout << prompt;
        std::cin >> searchNumber;
        if( std::cin.fail() )
        {
            std::cin.clear();
            std::cin.ignore( std::numeric_limits< std::streamsize >::max(), '\n' );
            std::cout << "Invalid input. Please enter a number.\n";
        }
        else
        {
            std::cin.ignore( std::numeric_limits< std::streamsize >::max(), '\n' );
            return searchNumber;
        }
    }
}
