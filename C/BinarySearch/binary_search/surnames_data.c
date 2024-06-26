#include "surnames_data.h"

#include <malloc.h>
#include <stdio.h>
#include <string.h>

SurnamesData initializeSurnamesData()
{
    SurnamesData surnamesData;

    char* surnames[] = { "Anderson", "Baker", "Bennett", "Brown", "Clark", "Davis",
                         "Edwards", "Evans", "Green", "Harris", "Jackson", "Johnson",
                         "Lewis", "Martin", "Moore", "Robinson", "Smith", "Taylor",
                         "Thomas", "Wilson" };
    int numberOfSurnames = sizeof( surnames ) / sizeof( surnames[ 0 ] );

    surnamesData.surnames = ( char** )malloc( numberOfSurnames * sizeof( char* ) );
    if( surnamesData.surnames == NULL )
    {
        fprintf(stderr, "Memory allocation error.\n" );
        exit( EXIT_FAILURE );
    }

    for( int i = 0; i < numberOfSurnames; ++i )
    {
        surnamesData.surnames[ i ] = strdup( surnames[ i ] );
        if( surnamesData.surnames[ i ] == NULL )
        {
            fprintf(stderr, "Memory allocation error.\n" );
            exit( EXIT_FAILURE );
        }
    }

    surnamesData.numberOfSurnames = numberOfSurnames;

    return surnamesData;
}

void freeSurnamesData( SurnamesData* surnamesData )
{
    for( int i = 0; i < surnamesData->numberOfSurnames; ++i )
    {
        free( surnamesData->surnames[ i ] );
    }
    free( surnamesData->surnames );
    surnamesData->surnames = NULL;
}
