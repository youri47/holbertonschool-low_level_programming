#include "main.h"
#include <stdio.h>
/**
 * _strncpy - Copie une chaine de caracteres
 * @dest: La chaine de destination
 * @src: La chaine source a copier
 * @n: Nombre maximum de bytes a copier de src
 *
 * Cette fonction copie au maximum n bytes de src vers dest.
 * Si src contient moins de n bytes, le reste de dest est rempli
 * avec des caracteres nuls.
 * Si src contient n bytes ou plus, dest ne sera pas null-terminated.
 *
 * Return: Un pointeur vers la chaine resultante dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	/* Copier src vers dest jusqu'a n bytes ou fin de src */
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	/* Remplir le reste avec des '\0' si i < n */
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
