#include <stdio.h>
#include "dog.h"

/**
 * main - Point d'entrée du programme
 *
 * Return: Toujours 0 (succès)
 */
int main(void)
{
	struct dog my_dog;

	my_dog.name = "Poppy";
	my_dog.age = 3.5;
	my_dog.owner = "Bob";
	print_dog(&my_dog);

	return (0);
}
