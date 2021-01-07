#include <stdio.h>

int main ()
{
    double a;
    double b;
    double c;
    double max; 
    
    printf("Zadej realna cisla : ");
    scanf("%lf %lf %lf", &a, &b, &c);
    
    if (a > b)  {
        if (a > b)
            max = a;
        else
            max = c;
    }
    else {
        if (b < c)
            max = c;
        else
            max = b;
    }

    printf("\nNejvetsi cislo je %f \n", max);
    return 0;
}