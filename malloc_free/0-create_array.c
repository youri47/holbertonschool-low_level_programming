#include "main.h"

/**
 * create_array - Crée un tableau de chars initialisé avec un caractère
 * @size: Taille du tableau à créer
 * @c: Caractère pour initialiser le tableau
 *
 * Return: Pointeur vers le tableau, ou NULL si échec ou size = 0
 */
char *create_array(unsigned int size, char c)
{
	char *tableau;
	unsigned int i;

	if (size == 0)
		return (NULL);

	tableau = malloc(sizeof(char) * size);

	if (tableau == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		tableau[i] = c;

	return (tableau);
}
