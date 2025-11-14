#include "main.h"
/**
 * simple_print_buffer - affiche le buffer en hexadecimal
 * @buffer: adresse de la memoire a afficher
 * @size: taille du buffer
 *
 * Return: rien
 */
void simple_print_buffer(char *buffer, unsigned int size)
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
 * main - teste la fonction _calloc
 *
 * Return: 0 en cas de succes
 */
int main(void)
{
	char *a;

	a = _calloc(98, sizeof(char));
	strcpy(a, "Best");
	strcpy(a + 4, " School! :)\n");
	a[97] = '!';
	simple_print_buffer(a, 98);
	free(a);
	return (0);
}
