#include <unistd.h>

/**
 * puts_half - affiche la deuxième moitié d'une chaîne
 * @str: la chaîne à afficher
 *
 * Return: void
 */
void puts_half(char *str)
{
	int length = 0;
	int start;

	/* Calculer la longueur de la chaîne */
	while (str[length] != '\0')
	{
		length++;
	}

	/* Calculer la position de départ */
	if (length % 2 == 0)
	{
		/* Si pair, commencer à length/2 */
		start = length / 2;
	}
	else
	{
		/* Si impair, commencer à (length + 1)/2 */
		start = (length + 1) / 2;
	}

	/* Afficher depuis la position de départ jusqu'à la fin */
	write(1, &str[start], length - start);
	write(1, "\n", 1);
}
