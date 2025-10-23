#include "main.h"

/**
 * _islower - Vérifie si un caractère est une lettre minuscule
 * @c: Le caractère à vérifier
 *
 * Return: 1 si c est une lettre minuscule, 0 sinon
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
