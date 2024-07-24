#include "selection_sort.hpp"

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
