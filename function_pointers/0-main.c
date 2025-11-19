#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name_as_is - Imprime un nom tel quel
 * @name: Le nom à imprimer
 */
void print_name_as_is(char *name)
{
	printf("Hello, my name is %s\n", name);
}

/**
 * print_name_uppercase - Imprime un nom en majuscules
 * @name: Le nom à imprimer
 */
void print_name_uppercase(char *name)
{
	unsigned int i;

	printf("Hello, my uppercase name is ");
	i = 0;
	while (name[i])
	{
		if (name[i] >= 'a' && name[i] <= 'z')
		{
			putchar(name[i] + 'A' - 'a');
		}
		else
		{
			putchar(name[i]);
		}
		i++;
	}
	printf("\n");
}

/**
 * main - Teste la fonction print_name
 *
 * Return: Toujours 0
 */
int main(void)
{
	print_name("Bob", print_name_as_is);
	print_name("Bob Dylan", print_name_as_is);
	print_name("bob dylan", print_name_uppercase);
	return (0);
}
