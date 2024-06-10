#include <iostream>
#include <vector>

unsigned int findSmallestIndex( const std::vector< int >& vec )
{
    int smallest = vec[ 0 ];
    unsigned int smallestIndex = 0;

    for( unsigned int i = 1; i < vec.size(); ++i )
    {
        if( vec[ i ] < smallest )
        {
            smallest = vec[ i ];
            smallestIndex = i;
        }
    }

    return smallestIndex;
}

std::vector< int > selectionSort( std::vector< int > vec )
{
    std::vector< int > result;
    const size_t vecSize = vec.size();

    for( unsigned int i = 0; i < vecSize ; ++i )
    {
        unsigned int smallestIndex = findSmallestIndex( vec );
        result.push_back( vec[ smallestIndex ] );
        vec.erase( vec.begin() + smallestIndex );
    }

    return result;
}

int main()
{
    std::vector< int > numbers = { 4, 305, 967, 32, 1, 279, 289, 7, 602, 203 };

    std::cout << "Numbers before sorting:\n";
    for( const int& n : numbers )
    {
        std::cout << n << ", ";
    }

    std::vector< int > sortedNumbers = selectionSort( numbers );

    std::cout << "\nNumbers after sorting:\n";
    for( const int& sn : sortedNumbers )
    {
        std::cout << sn << ", ";
    }

    return 0;
}
