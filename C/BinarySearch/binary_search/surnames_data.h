#ifndef SURNAMES_DATA_H
#define SURNAMES_DATA_H

typedef struct
{
    char** surnames;
    int numberOfSurnames;
} SurnamesData;

SurnamesData initializeSurnamesData();
void freeSurnamesData( SurnamesData* surnamesData );

#endif //SURNAMES_DATA_H
