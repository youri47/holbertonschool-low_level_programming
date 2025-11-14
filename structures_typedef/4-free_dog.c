#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Libère la mémoire allouée pour un chien
 * @d: Pointeur vers la structure dog_t à libérer
 *
 * Description: Cette fonction libère la mémoire allouée pour une structure
 * dog_t et ses membres. Si d est NULL, ne fait rien.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
