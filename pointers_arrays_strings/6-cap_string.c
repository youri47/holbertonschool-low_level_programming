#include "main.h"
#include <stdio.h>
/**
 * is_separator - Verifie si un caractere est un separateur
 * @c: Le caractere a verifier
 *
 * Return: 1 si c'est un separateur, 0 sinon
 */
int is_separator(char c)
{
	int i;
	char separators[] = " \t\n,;.!?\"(){}";

	for (i = 0; separators[i] != '\0'; i++)
	{
		if (c == separators[i])
		{
			return (1);
		}
	}
	return (0);
}

/**
 * cap_string - Capitalise tous les mots d'une chaine
 * @str: La chaine de caracteres a modifier
 *
 * Cette fonction met en majuscule la premiere lettre de chaque mot.
 * Un nouveau mot commence apres un separateur : espace, tabulation,
 * nouvelle ligne, virgule, point-virgule, point, point d'exclamation,
 * point d'interrogation, guillemet, parentheses ou accolades.
 *
 * Return: Un pointeur vers la chaine modifiee
 */
char *cap_string(char *str)
{
	int i = 0;
	int new_word = 1;

	while (str[i] != '\0')
	{
		if (is_separator(str[i]))
		{
			new_word = 1;
		}
		else if (new_word && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			new_word = 0;
		}
		else
		{
			new_word = 0;
		}
		i++;
	}

	return (str);
}
