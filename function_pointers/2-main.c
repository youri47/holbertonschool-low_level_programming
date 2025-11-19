#include <stdio.h>
#include "function_pointers.h"

/**
 * is_98 - Vérifie si un nombre est égal à 98
 * @elem: L'entier à vérifier
 *
 * Return: 0 si faux, autre chose si vrai
 */
int is_98(int elem)
{
	return (elem == 98);
}

/**
 * is_strictly_positive - Vérifie si un nombre est strictement positif
 * @elem: L'entier à vérifier
 *
 * Return: 0 si faux, autre chose si vrai
 */
int is_strictly_positive(int elem)
{
	return (elem > 0);
}

/**
 * abs_is_98 - Vérifie si la valeur absolue est 98
 * @elem: L'entier à vérifier
 *
 * Return: 0 si faux, autre chose si vrai
 */
int abs_is_98(int elem)
{
	return (elem == 98 || -elem == 98);
}

/**
 * is_even - Vérifie si un nombre est pair
 * @elem: L'entier à vérifier
 *
 * Return: 0 si faux, 1 si vrai
 */
int is_even(int elem)
{
	return (elem % 2 == 0);
}

/**
 * main - Teste la fonction int_index
 *
 * Return: Toujours 0
 */
int main(void)
{
	int array[20] = {0, -98, 98, 402, 1024, 4096, -1024};
	int index;

	index = int_index(array, 20, is_98);
	printf("Index du premier 98: %d\n", index);

	index = int_index(array, 20, abs_is_98);
	printf("Index du premier |98|: %d\n", index);

	index = int_index(array, 20, is_strictly_positive);
	printf("Index du premier nombre positif: %d\n", index);

	index = int_index(array, 20, is_even);
	printf("Index du premier nombre pair: %d\n", index);

	return (0);
}
