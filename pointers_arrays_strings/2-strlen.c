#include "main.h"

/**
 * _strlen - retourne la longueur d'une chaîne de caractères
 * @s: pointeur vers la chaîne
 *
 * Return: longueur de la chaîne
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
