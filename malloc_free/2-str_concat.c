#include "main.h"

/**
 * str_concat - Concatène deux chaînes de caractères
 * @s1: Première chaîne
 * @s2: Deuxième chaîne
 *
 * Return: Pointeur vers la nouvelle chaîne, ou NULL si échec
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int longueur1, longueur2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	longueur1 = 0;
	while (s1[longueur1] != '\0')
		longueur1++;

	longueur2 = 0;
	while (s2[longueur2] != '\0')
		longueur2++;

	concat = malloc(sizeof(char) * (longueur1 + longueur2 + 1));

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < longueur1; i++)
		concat[i] = s1[i];

	for (j = 0; j < longueur2; j++)
		concat[i + j] = s2[j];

	concat[i + j] = '\0';

	return (concat);
}
