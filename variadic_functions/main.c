#include <stdio.h>
#include "variadic_functions.h"

/**
 * main - Teste la fonction sum_them_all
 *
 * Return: Toujours 0
 */
int main(void)
{
	int sum;

	sum = sum_them_all(2, 98, 1024);
	printf("%d\n", sum);
	
	sum = sum_them_all(4, 98, 1024, 402, -1024);
	printf("%d\n", sum);
	
	sum = sum_them_all(0);
	printf("%d\n", sum);

	return (0);
}
