#include <stdio.h>
#include <string.h>

int main()
{
    char prvnicast [50];
    char druhacast [50];
    char treticast [50];
    char ctvrtacast [50];
    char patacast [50];
    
    char text1 [50] = "Zadejte prvni cast vety: \n";
    char text2 [50] = "Zadejte druhou cast vety: \n";
    char text3 [50] = "Zadejte treti cast vety: \n";
    char text4 [50] = "Zadejte ctvrtou cast vety: \n";
    char text5 [50] = "Zadejte patou cast vety: \n";

    int cislo;

    printf ("%s", text1);
    gets (prvnicast);
    strrev (prvnicast);

    printf ("%s", text2);
    gets (druhacast);
    strrev (druhacast);

    printf ("%s", text3);
    gets (treticast);
    strrev (treticast);

    printf ("%s", text4);
    gets (ctvrtacast);
    strrev (ctvrtacast);

    printf ("%s", text5);
    gets (patacast);
    strrev (patacast);

    printf ("Zadejte cislo (0-5): \n");
    scanf ("%d", &cislo);

    if (cislo == 0)
    {
        printf ("%s", prvnicast);
        printf ("%s", druhacast);
        printf ("%s", treticast);
        printf ("%s", ctvrtacast);
        printf ("%s", patacast);
    }

    if (cislo == 1)
    {
        printf ("%s", druhacast);
        printf ("%s", treticast);
        printf ("%s", ctvrtacast);
        printf ("%s", patacast);
        printf ("%s", prvnicast);
    }

    if (cislo == 2)
    {
        printf ("%s", treticast);
        printf ("%s", ctvrtacast);
        printf ("%s", patacast);
        printf ("%s", prvnicast);
        printf ("%s", druhacast);
    }

    if (cislo == 3)
    {
        printf ("%s", ctvrtacast);
        printf ("%s", patacast);
        printf ("%s", prvnicast);
        printf ("%s", druhacast);
        printf ("%s", treticast);
    }

    if (cislo == 4)
    {
        printf ("%s", patacast);
        printf ("%s", prvnicast);
        printf ("%s", druhacast);
        printf ("%s", treticast);
        printf ("%s", ctvrtacast);
    }
    if (cislo == 5)
    {
        printf ("%s", patacast);
        printf ("%s", druhacast);
        printf ("%s", ctvrtacast);
        printf ("%s", treticast);
        printf ("%s", prvnicast);
    }

    if (cislo >= 6)
    {
        char chybovahlaska [100] = "Zadali jste cislo mimo povoleny rozsah!\nRozsah je 0 - 5!";
        printf ("%s", chybovahlaska);
    }

    return 0;
}
