#include "main.h"
#include <stdio.h>
/**
 * leet - Encode une chaine en 1337
 * @str: La chaine de caracteres a encoder
 *
 * Cette fonction remplace certaines lettres par des chiffres :
 * a/A -> 4, e/E -> 3, o/O -> 0, t/T -> 7, l/L -> 1
 * Utilise seulement un if et deux boucles.
 *
 * Return: Un pointeur vers la chaine encodee
 */
char *leet(char *str)
{
	int i, j;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = numbers[j];
			}
		}
	}

	return (str);
}
