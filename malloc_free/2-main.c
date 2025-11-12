#include "main.h"

/**
 * main - Point d'entrée du programme
 *
 * Return: 0 si succès, 1 sinon
 */
int main(void)
{
	char *s;

	s = str_concat("Hello ", "World");
	if (s == NULL)
	{
		printf("Echec de l'allocation\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);
	return (0);
}
