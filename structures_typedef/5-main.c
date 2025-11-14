#include <stdio.h>
#include "dog.h"

/**
 * main - Point d'entrée du programme
 *
 * Return: Toujours 0 (succès)
 */
int main(void)
{
	dog_t *my_dog;

	my_dog = new_dog("Poppy", 3.5, "Bob");
	if (my_dog == NULL)
	{
		printf("Erreur lors de la création du chien\n");
		return (1);
	}

	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);

	free_dog(my_dog);

	return (0);
}
