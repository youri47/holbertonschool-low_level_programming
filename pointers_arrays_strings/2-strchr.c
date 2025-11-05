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
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	
	if (*s == c)
	{
		return (s);
	}

	return ('\0');
}
