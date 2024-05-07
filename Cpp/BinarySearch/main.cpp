#include <iostream>
#include <vector>

size_t binarySearch( const std::vector< int >& vec, const int target )
{
    size_t start = 0;
    size_t end = vec.size() - 1;

    while( start <= end )
    {
        size_t middle = ( start + end ) / 2;
        size_t result = vec[ middle ];
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

int main()
{
    std::vector< int > numbers;
    numbers.reserve( 10000000 );
    for( int i = 1; i <= 10000000 ; ++i )
    {
        numbers.push_back( i );
    }

    int searchNumber = 0;
    std::cout << "Enter the number to search: ";
    std::cin >> searchNumber;

    const size_t index = binarySearch( numbers, searchNumber );

    if( index != -1 )
    {
        std::cout << "Element " << searchNumber << " is at position number " << index << " in the vector.\n";
    }
    else
    {
        std::cout << "Element " << searchNumber << " is not in the vector.\n";
    }

    return 0;
}
