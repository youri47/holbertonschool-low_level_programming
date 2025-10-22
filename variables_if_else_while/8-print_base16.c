#include <stdio.h>

int main(void)
{
	int chiffre;
	int lettre;

	for (chiffre = '0' ; chiffre <= '9' ; chiffre++)
	{
		putchar(chiffre);
	}

	for (lettre = 'a' ;lettre <= 'f' ; lettre++)
	{
		putchar(lettre);
	}

	putchar('\n');

	return (0);
}
