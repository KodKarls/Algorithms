#include "binary_search.h"
#include "input.h"
#include "surnames_data.h"

#include <stdlib.h>
#include <stdio.h>

int main( void )
{
    SurnamesData surnamesData = initializeSurnamesData();

    char* target = getInputString( "Enter the surname to search: ", 19 );

    int result = binarySearch( surnamesData.surnames, surnamesData.numberOfSurnames, target );
    if( result != -1 )
    {
        printf( "Surname '%s' found in position %d.\n", target, result );
    }
    else
    {
        printf( "Surname '%s' not found.\n", target );
    }

    free( target );
    freeSurnamesData( &surnamesData );

    return 0;
}
