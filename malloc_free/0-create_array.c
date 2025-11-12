#include "main.h"

/**
 * create_array - Cr�e un tableau de chars initialisé avec un caractè
 * @size: Taille du tableau a créer
 * @c: Caractère pour initialiser le tablea
 *
 * Return: Pointeur vers le tableau, ou NULL si échec ou size = 
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
