#include "main.h"
/**
 * _atoi - convertit une chaîne en entier
 * @s: la chaîne à convertir
 *
 * Return: l'entier converti, ou 0 si pas de nombre
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int started = 0;
	unsigned int result = 0;

	/* Parcourir la chaîne */
	while (s[i] != '\0')
	{
		/* Si on trouve un signe - ou +, et qu'on n'a pas encore commencé */
		if (s[i] == '-' && started == 0)
		{
			sign *= -1;
		}
		else if (s[i] == '+' && started == 0)
		{
			/* Le signe + ne change rien */
		}
		/* Si on trouve un chiffre */
		else if (s[i] >= '0' && s[i] <= '9')
		{
			started = 1;
			result = result * 10 + (s[i] - '0');
		}
		/* Si on a déjà commencé et qu'on trouve un non-chiffre, on arrête */
		else if (started == 1)
		{
			break;
		}

		i++;
	}

	return (sign * result);
}
