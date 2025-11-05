#include "main.h"

/**
 * _strspn - obtient la longueur d'un préfixe de sous-chaîne
 * @s: pointeur vers la chaîne à analyser
 * @accept: pointeur vers la chaîne contenant les caractères acceptés
 *
 * Return: nombre d'octets au début de s qui sont dans accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j;
	int found;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}

		if (found == 0)
		{
			break;
		}

		count++;
	}

	return (count);
}
