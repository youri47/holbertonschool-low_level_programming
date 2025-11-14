#include "main.h"
/**
 * malloc_checked - alloue de la memoire avec malloc
 * @b: nombre d'octets a allouer
 *
 * Return: pointeur vers la memoire allouee
 * Si malloc echoue, termine le processus avec le statut 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
