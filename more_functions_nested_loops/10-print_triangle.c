#include "main.h"

/**
 * print_triangle - affiche un triangle droit avec le caractère '#'
 * @size: taille du triangle (hauteur et base)
 */
void print_triangle(int size)
{
	int row, space, hash;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			/* imprimer les espaces */
			for (space = size - row; space > 0; space--)
			{
				_putchar(' ');
			}
			/* imprimer les # */
			for (hash = 0; hash < row; hash++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

