#include "main.h"

/**
 * simple_print_buffer - Affiche le buffer caractère par caractère
 * @buffer: Le pointeur vers le buffer à afficher
 * @size: La taille du buffer
 *
 * Return: void
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10 == 0)
			printf("\n");
		printf("%02x ", buffer[i]);
		i++;
	}
	printf("\n");
}

/**
 * main - Point d'entrée du programme
 *
 * Return: 0 si succès, 1 sinon
 */
int main(void)
{
	char *buffer;

	buffer = create_array(98, 'H');
	if (buffer == NULL)
	{
		printf("Echec de la creation du tableau\n");
		return (1);
	}
	simple_print_buffer(buffer, 98);
	free(buffer);
	return (0);
}
