#include "main.h"
/**
 * array_range - cree un tableau d'entiers
 * @min: valeur minimale
 * @max: valeur maximale
 *
 * Return: pointeur vers le tableau cree, NULL si echec
 */
int *array_range(int min, int max)
{
	int *array;
	int i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = min + i;
	return (array);
}
