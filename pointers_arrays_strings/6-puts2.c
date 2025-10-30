#include "main.h"

/**
 * puts2 - affiche un caractère sur deux d'une chaîne
 * @str: pointeur vers la chaîne
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
