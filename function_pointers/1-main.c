#include <stdio.h>
#include "function_pointers.h"

/**
 * print_elem - Affiche un entier
 * @elem: L'entier à afficher
 */
void print_elem(int elem)
{
	printf("%d\n", elem);
}

/**
 * print_elem_hex - Affiche un entier en hexadécimal
 * @elem: L'entier à afficher
 */
void print_elem_hex(int elem)
{
	printf("0x%x\n", elem);
}

/**
 * print_elem_square - Affiche le carré d'un entier
 * @elem: L'entier dont on calcule le carré
 */
void print_elem_square(int elem)
{
	printf("%d\n", elem * elem);
}

/**
 * main - Teste la fonction array_iterator
 *
 * Return: Toujours 0
 */
int main(void)
{
	int array[5] = {0, 98, 402, 1024, 4096};

	printf("Affichage normal:\n");
	array_iterator(array, 5, &print_elem);
	
	printf("\nAffichage en hexadécimal:\n");
	array_iterator(array, 5, &print_elem_hex);
	
	printf("\nAffichage des carrés:\n");
	array_iterator(array, 5, &print_elem_square);
	
	return (0);
}
