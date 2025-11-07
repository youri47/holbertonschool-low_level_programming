#include <stdio.h>

/**
 * main - affiche tous les arguments reçus
 * @argc: nombre d'arguments
 * @argv: tableau des arguments
 *
 * Return: Toujours 0 (Succès)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
