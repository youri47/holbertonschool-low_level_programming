#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Recherche un entier dans un tableau
 * @array: Le tableau d'entiers
 * @size: Le nombre d'éléments dans le tableau
 * @cmp: Pointeur vers la fonction de comparaison
 *
 * Description: Cette fonction parcourt un tableau et retourne l'index
 * du premier élément pour lequel la fonction cmp ne retourne pas 0.
 *
 * Return: L'index du premier élément correspondant, ou -1 si aucun
 * élément ne correspond ou si size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
