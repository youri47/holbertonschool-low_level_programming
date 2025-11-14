#include "main.h"
/**
 * _calloc - alloue de la memoire pour un tableau
 * @nmemb: nombre d'elements
 * @size: taille en octets de chaque element
 *
 * Return: pointeur vers la memoire allouee, NULL si echec
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i, total;

	if (nmemb == 0 || size == 0)
		return (NULL);
	total = nmemb * size;
	ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < total; i++)
		ptr[i] = 0;
	return (ptr);
}
