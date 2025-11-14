#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * main - Point d'entrée du programme
 *
 * Return: Toujours 0 (succès)
 */
int main(void)
{
	dog_t *my_dog;

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
	{
		printf("Erreur d'allocation mémoire\n");
		return (1);
	}

	my_dog->name = malloc(6);
	if (my_dog->name != NULL)
	{
		my_dog->name[0] = 'P';
		my_dog->name[1] = 'o';
		my_dog->name[2] = 'p';
		my_dog->name[3] = 'p';
		my_dog->name[4] = 'y';
		my_dog->name[5] = '\0';
	}

	my_dog->age = 3.5;

	my_dog->owner = malloc(4);
	if (my_dog->owner != NULL)
	{
		my_dog->owner[0] = 'B';
		my_dog->owner[1] = 'o';
		my_dog->owner[2] = 'b';
		my_dog->owner[3] = '\0';
	}

	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
	free_dog(my_dog);

	return (0);
}
