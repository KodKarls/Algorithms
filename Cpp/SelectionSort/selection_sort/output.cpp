#include "output.hpp"

#include <iostream>

void printResult( const std::vector< int >& vec, const std::string& message )
{
    std::cout << message << '\n';
    for( auto& n : vec )
    {
        std::cout << n << ", ";
    }
    std::cout << '\n';
}
