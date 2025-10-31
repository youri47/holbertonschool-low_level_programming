#include "main.h"
#include <stdio.h>
/**
 * reverse_array - Inverse le contenu d'un tableau d'entiers
 * @a: Le tableau d'entiers a inverser
 * @n: Le nombre d'elements du tableau
 *
 * Cette fonction inverse l'ordre des elements dans le tableau.
 * Le premier element devient le dernier, le deuxieme devient
 * l'avant-dernier, etc.
 *
 * Return: Rien (void)
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	/* Inverser en echangeant les elements symetriques */
	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
