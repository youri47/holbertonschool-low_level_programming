#include "main.h"
#include <stdio.h>
/**
 * string_toupper - Change toutes les lettres minuscules en majuscules
 * @str: La chaine de caracteres a modifier
 *
 * Cette fonction parcourt la chaine et convertit chaque lettre
 * minuscule (a-z) en sa version majuscule (A-Z).
 * Les autres caracteres restent inchanges.
 *
 * Return: Un pointeur vers la chaine modifiee
 */
char *string_toupper(char *str)
{
	int i = 0;

	/* Parcourir toute la chaine */
	while (str[i] != '\0')
	{
		/* Si c'est une minuscule, convertir en majuscule */
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}

	return (str);
}
