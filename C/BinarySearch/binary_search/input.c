#include "input.h"

#include <malloc.h>
#include <stdio.h>

char* getInputString( const char* prompt, int maxSize )
{
    char* buffer = ( char* )malloc( ( maxSize + 1 ) * sizeof( char ) );
    if( buffer == NULL )
    {
        fprintf( stderr, "Memory allocation error\n" );
        exit( EXIT_FAILURE );
    }

    printf( "%s", prompt );
    fflush( stdout );
    scanf( "%s", buffer );

    return buffer;
}
