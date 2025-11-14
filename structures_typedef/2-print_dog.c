#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Affiche une structure dog
 * @d: Pointeur vers la structure dog à afficher
 *
 * Description: Cette fonction affiche tous les membres d'une structure dog.
 * Si un élément est NULL, affiche "(nil)" à la place.
 * Si d est NULL, n'affiche rien.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
	}
}
