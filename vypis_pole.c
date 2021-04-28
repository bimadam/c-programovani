/*
    Program vypisuje pole o deseti prvcích.
    Èísla v prvcích jsou pøesnì daná
*/

#include <stdio.h>
#include <stdlib.h>

int main()
    {
        int pole [10] = {9, 5, 10, 11, 21, 55, 48, 9999, 3, 6};
        int i;

        for (i = 0; i < 10; i++)
        {
            printf ("pole [%d] = %d\n", i, pole[i]);
        }

     return 0;
    }
