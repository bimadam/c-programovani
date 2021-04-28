#include <stdio.h>
#include <stdlib.h>


int main()
{
    int den, mes, rok;
    int rc = 50107;

    rok = rc / 10000;

    //mes = (rc / 100) - (rok * 100);
    mes = rc / 100 % 100;

    //den = rc - (rok * 10000) - (mes * 100);
    den = rc % 100;

    rok += (rok > 21 ? 1900 : 2000);

    printf("Narodil jsem se %d. %d. %d.\n", den, mes, rok);

    return 0;
}

