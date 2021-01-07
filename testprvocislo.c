#include <stdio.h>
#include <math.h>

int main (int argc, char * argv[])
    {
        int nr, limit, i, is_prime = 1;

        printf ("Zadej testovane cislo\n");
        scanf ( "%d", &nr );

        if (nr <= 0)
            {
                printf ("Zadane cislo musi byt kladne\n");
                return (1);
            }

        limit = (int) floor (sqrt (nr)); //cele cislo nejdrive odmocni a pak zaokrouhli dolu

        for ( i=2; i <= limit; i ++ ) //for znamená cyklus
            if (!( nr % i )) //cislo zadane uzivatelem vydeli "i" a vrati zbytek po deleni
                is_prime = 0;

        if ( nr == 1 ) is_prime = 0; //1 neni prvocislo
        if ( is_prime )
            printf ( "%d je prvocislo\n", nr );
            else
            printf ( "%d neni prvocislo\n", nr);
        return ( 0 );        
    }