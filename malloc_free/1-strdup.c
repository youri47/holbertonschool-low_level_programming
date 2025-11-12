#include "main.h"

/**
 * _strdup - Duplique une chaîne de caractères en mémoire
 * @str: La chaînea dupliquer
 *
 * Return: Pointeur vers la nouvelle chaîne, ou NULL si échec ou str = NULL
 */
char *_strdup(char *str)
{
	char *copie;
	unsigned int longueur, i;

	if (str == NULL)
		return (NULL);

	longueur = 0;
	while (str[longueur] != '\0')
		longueur++;

	copie = malloc(sizeof(char) * (longueur + 1));

	if (copie == NULL)
		return (NULL);

	for (i = 0; i < longueur; i++)
		copie[i] = str[i];

	copie[longueur] = '\0';

	return (copie);
}
