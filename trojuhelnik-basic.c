#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main()
{
    int h = 10;
    int i;
    int x;

    for (i= 0; i <= h; i++)
    {
        for (x = 0; x <= (h - i - 1); x++)
        {
            printf(" ");
        }
        for (int x = 1; x <= i; x++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
