#include<stdio.h>

void ceasar_encrypt (char message[])
{
    char abc;
	int i;
	int cislo;
	
	printf("Vas text: ");
	gets(message);
	printf("Kolik cisel chcete pouzit? ");
	scanf("%d", &cislo);
	
	for (i = 0; message[i] != '\0'; ++i)
	{
		abc = message[i];
		
		if (abc >= 'A' && abc <= 'Z')
		{
			abc = abc + cislo;
			
			if (abc > 'Z'){
				abc = abc - 'Z' + 'A' - 1;
			}
			
			message [i] = abc;
		}
	}
	
	printf("Vas zasifrovany text: %s", message);
	
}
int main()
{
	char abc;
	int i;
	int cislo;
	char message [100];
	
	ceasar_encrypt(message);
	return 0;
}
