#include "main.h"

/**
 * _memset - remplit la mémoire avec un octet constant
 * @s: pointeur vers la zone mémoire
 * @b: l'octet constant pour remplir
 * @n: nombre d'octets à remplir
 *
 * Return: pointeur vers la zone mémoire s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
