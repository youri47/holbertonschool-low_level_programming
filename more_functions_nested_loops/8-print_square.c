#include "main.h"

/**
 * print_square - affiche un carré avec le caractère '#'
 * @size: taille du carré (hauteur et largeur)
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)   /* lignes */
		{
			for (j = 0; j < size; j++) /* colonnes */
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

