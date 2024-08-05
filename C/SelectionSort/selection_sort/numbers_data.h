#pragma once

typedef struct
{
    int* numbers;
    int size;
} NumbersData;

NumbersData initializeNumbersData();
NumbersData copyNumbersData( const NumbersData* original );
void checkMemoryAllocation( void* ptr );
void freeNumbersData( NumbersData* numbersData );
