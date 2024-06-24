#include "binary_search.h"

#include <string.h>

int binarySearch( char* array[], int size, char* target )
{
    int left = 0;
    int right = size - 1;

    while( left <= right )
    {
        int middle = left + ( right - left ) / 2;
        int guessIndex = strcmp( array[ middle ], target );

        if( guessIndex == 0 )
        {
            return middle;
        }

        if( guessIndex < 0 )
        {
            left = middle + 1;
        }
        else
        {
            right = middle - 1;
        }
    }

    return -1;
}
