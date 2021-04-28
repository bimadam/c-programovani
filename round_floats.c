#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void generate_items (float pole [])
{
    int i;
    for (i = 0; i < 10; i++)
    {
        pole [i] = (float) rand () / RAND_MAX * 100;
    }
}

void show_items (float pole [])
{
    printf ("Zakladni pole:\n");
    for (int i = 0; i < 10; i++)
    {
        printf ("pole v zakladnim tvaru [%d] = %.3f\n", i, pole [i]);
    }
}

void round_items (float pole [])
{
    printf ("Zaokrouhlene pole:\n");
    for (int i = 0; i < 10; i++)
    {
        printf ("zaokrouhlene pole [%d] = %.1f\n", i, round (pole [i]));
    }
}

int main(int argc, char** argv)
{
    srand((unsigned)time(NULL));

    float pole [10];

    //generovani pole
    generate_items (pole);

    //vypsani pole, ktere ma prvky s 3 desetinnymi misty
    show_items (pole);

    //mezery
    printf ("\n\n");

    //vypsani pole, ktere ma prvky zaokrouhlene na desetiny
    round_items (pole);

    return 0;
}