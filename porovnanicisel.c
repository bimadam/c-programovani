#include <stdio.h>

int main ()
{
    double x,y,z, max;

    printf("Zadej tri realna cisla : ");
    scanf("%lf %lf %lf", &x, &y, &z); //Naskenuje to co zadal uzivatel
    
    if (x > y)  {
        if (x > z)
            max = x;
        else
            max = z;
    }
    else {
        if (y < z)
            max = z;
        else
            max = y;
    }

    printf("\nNejvetsi cislo je %f \n", max);
    return 0;
}