#pragma once

#include "numbers_data.h"

NumbersData selectionSort( const NumbersData* numbersData );
unsigned int findSmallestIndex( NumbersData numbersData, unsigned int start );
void swap( int* a, int* b );

void printResult( NumbersData numbersData, const char* message );
