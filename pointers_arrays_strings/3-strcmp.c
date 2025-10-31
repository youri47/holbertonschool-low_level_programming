#include "main.h"
#include <stdio.h>
/**
 * _strcmp - Compare deux chaines de caracteres
 * @s1: La premiere chaine a comparer
 * @s2: La deuxieme chaine a comparer
 *
 * Cette fonction compare deux chaines caractere par caractere.
 * Elle retourne 0 si les chaines sont identiques, une valeur
 * negative si s1 < s2, ou une valeur positive si s1 > s2.
 *
 * Return: 0 si identiques, negatif si s1 < s2, positif si s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	/* Comparer caractere par caractere */
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}

	/* Si on arrive ici, une chaine est finie */
	return (s1[i] - s2[i]);
}
