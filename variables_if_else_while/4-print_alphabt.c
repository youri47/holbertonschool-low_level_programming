#include <stdio.h>

/**
 * main - Affiche l'alphabet en minuscule, puis un saut de ligne,
 * sans la lettre q et e , avec putchar seulement 2fois
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alphabet = 97;

	while (alphabet <= 122)
	{
		if (alphabet != 101 && alphabet != 113)
		{
			putchar(alphabet);
		}
		alphabet++;
	}
	putchar('\n');

	return (0);
}
