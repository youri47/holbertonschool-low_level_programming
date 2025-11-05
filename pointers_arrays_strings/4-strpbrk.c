#include "main.h"

/**
 * _strpbrk - recherche dans une chaîne un ensemble d'octets
 * @s: pointeur vers la chaîne à analyser
 * @accept: pointeur vers la chaîne contenant les caractères à chercher
 *
 * Return: pointeur vers le premier caractère trouvé dans s, ou NULL sinon
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}

	return ('\0');
}
