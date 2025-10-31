#include "main.h"
#include <stdio.h>
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	/* Trouver la fin de dest */
	while (dest[i] != '\0')
	{
		i++;
	}

	/* Copier src à la fin de dest */
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* Ajouter le caractère de fin */
	dest[i] = '\0';

	return (dest);
}
