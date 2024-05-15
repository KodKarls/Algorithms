#include <iostream>
#include <vector>

std::vector< int > quickSort( const std::vector< int >& vec )
{
    if( vec.size() <= 1 )
    {
        return vec;
    }

    const auto pivot = vec[ vec.size() / 2 ];

    std::vector< int > less;
    std::vector< int > equal;
    std::vector< int > greater;

    for( const auto& v : vec )
    {
        if( v < pivot )
        {
            less.push_back( v );
        }
        else if( v == pivot )
        {
            equal.push_back( v );
        }
        else
        {
            greater.push_back( v );
        }
    }

    auto sortedLess = quickSort( less );
    auto sortedGreater = quickSort( greater );

    std::vector< int > result = sortedLess;
    result.insert( result.end(), equal.begin(), equal.end() );
    result.insert( result.end(), sortedGreater.begin(), sortedGreater.end() );

    return result;
}

int main()
{
    std::vector< int > numbers = { 6, 5, 5, 4, 3, 12, 12, 10, 107, 1, 15, 35, 83, 154, 2 };

    std::cout << "Numbers before sorting:\n";
    for( const auto& n : numbers )
    {
        std::cout << n << ", ";
    }

    auto sortedNumbers = quickSort( numbers );

    std::cout << "\nNumbers after sorting:\n";
    for( const auto& sn : sortedNumbers )
    {
        std::cout << sn << ", ";
    }

    return 0;
}
