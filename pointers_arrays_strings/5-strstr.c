#include "main.h"

/**
 * _strstr - localise une sous-chaîne
 * @haystack: pointeur vers la chaîne où chercher
 * @needle: pointeur vers la sous-chaîne à trouver
 *
 * Return: pointeur vers le début de la sous-chaîne, ou NULL si non trouvée
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (needle[0] == '\0')
	{
		return (haystack);
	}

	for (i = 0; haystack[i] != '\0'; i++)
	{
		j = 0;

		while (needle[j] != '\0' && haystack[i + j] == needle[j])
		{
			j++;
		}

		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}

	return ('\0');
}
