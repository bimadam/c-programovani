#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main()
{
    int n = 10;
    for (int y = 1; y <= n; y++)
    {
        for (int x = 1; x <= y; x++)
        {
            //printf("[%i,%i]", x, y);
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
