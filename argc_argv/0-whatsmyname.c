#include <stdio.h>

/**
 * main - affiche le nom du programme suivi d'une nouvelle ligne
 * @argc: nombre d'arguments (non utilisé)
 * @argv: tableau des arguments
 *
 * Return: Toujours 0 (Succès)
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
