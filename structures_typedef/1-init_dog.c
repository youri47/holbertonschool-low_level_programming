#include "dog.h"
#include <stddef.h>

/**
 * init_dog - Initialise une variable de type struct dog
 * @d: Pointeur vers la structure dog à initialiser
 * @name: Nom du chien
 * @age: Âge du chien
 * @owner: Propriétaire du chien
 *
 * Description: Cette fonction initialise tous les membres d'une structure dog
 * avec les valeurs passées en paramètres. Si d est NULL, ne fait rien.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
