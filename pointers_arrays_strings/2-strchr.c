#include "main.h"

/**
 * _strchr - localise un caractère dans une chaîne
 * @s: pointeur vers la chaîne de caractères
 * @c: caractère à rechercher
 *
 * Return: pointeur vers la première occurrence de c, ou NULL si non trouvé
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; ; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		if (s[i] == '\0')
		{
			break;
		}
	}

	return ('\0');
}
