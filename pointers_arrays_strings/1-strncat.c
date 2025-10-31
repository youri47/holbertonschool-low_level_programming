#include "main.h"
#include <stdio.h>
/**
 * _strncat - Concatene deux chaines avec limite de n bytes
 * @dest: La chaine de destination
 * @src: La chaine source a ajouter
 * @n: Nombre maximum de bytes a utiliser de src
 *
 * Cette fonction ajoute la chaine src a la fin de la chaine dest,
 * en utilisant au maximum n bytes de src. Si src contient n bytes
 * ou plus, src n'a pas besoin d'etre null-terminated.
 *
 * Return: Un pointeur vers la chaine resultante dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	/* Trouver la fin de dest */
	while (dest[i] != '\0')
	{
		i++;
	}

	/* Copier au maximum n bytes de src a la fin de dest */
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* Ajouter le caractere de fin */
	dest[i] = '\0';

	return (dest);
}
