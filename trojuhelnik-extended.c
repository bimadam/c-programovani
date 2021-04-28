/*
Vytvoril Adam Bim
*/

#include <stdio.h>
#include <stdlib.h>

/*
Trojuhelnik vypisuje *, ale je pripraveny na vypisovani cisel
Staci pouze smazat prikaz na 24.radku a pouzit prikaz na 25. radku, ktery je oznaceny jako komentar
*/

long trojuhelnik (int);

int main()
{

  int i, c;
  int h;

  printf("Kolik chcete radku v trojuhelniku:\n");
  scanf("%d",&h);

  for (i = 0; i < h; i++)
  {
    for (c = 0; c <= (h - i - 2); c++)
      printf(" ");

    for (c = 0 ; c <= i; c++)
      printf("* ");
      //printf("%ld ", trojuhelnik (i) / (trojuhelnik (c) * trojuhelnik (i-c)) );

    printf("\n");
  }

  return 0;
}

long trojuhelnik (int h)
{
  int c;
  long vysledek = 1;

  for (c = 1; c <= h; c++)
    vysledek = vysledek * c;

  return vysledek;
}
