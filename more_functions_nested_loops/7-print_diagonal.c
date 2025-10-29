#include "main.h"

/**
 * print_diagonal - dessine une ligne diagonale avec le caractère '\'
 * @n: nombre de fois que le caractère '\' doit être imprimé
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' '); /* imprime des espaces avant le '\' */
			}
			_putchar('\\');   /* imprime la diagonale */
			_putchar('\n');   /* retour à la ligne */
		}
	}
}

