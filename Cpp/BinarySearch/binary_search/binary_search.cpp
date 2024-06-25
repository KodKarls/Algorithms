#include "binary_search.hpp"

int binarySearch( const std::vector< int >& vec, const int target )
{
    int start = 0;
    int end = static_cast< int >( vec.size() ) - 1;

    while( start <= end )
    {
        int middle = ( start + end ) / 2;
        int result = vec[ middle ];
        if( result == target )
        {
            return middle;
        }
        else if( result < target )
        {
            start = middle + 1;
        }
        else
        {
            end = middle - 1;
        }
    }

    return -1;
}
