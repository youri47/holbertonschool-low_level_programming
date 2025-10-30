#include "main.h"

/**
 * print_rev - affiche une chaîne à l'envers suivie d'un retour à la ligne
 * @s: pointeur vers la chaîne à afficher
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	len--;
	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
