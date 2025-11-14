#include "main.h"
/**
 * simple_print_buffer - affiche le buffer
 * @buffer: adresse de la memoire a afficher
 * @size: taille du buffer
 *
 * Return: rien
 */
void simple_print_buffer(int *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
			printf(" ");
		if (!(i % 10) && i)
			printf("\n");
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
}
/**
 * main - teste la fonction array_range
 *
 * Return: 0 en cas de succes
 */
int main(void)
{
	int *a;

	a = array_range(0, 10);
	simple_print_buffer(a, 11);
	free(a);
	return (0);
}
