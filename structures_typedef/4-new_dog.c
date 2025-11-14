#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - Calcule la longueur d'une chaîne de caractères
 * @s: Chaîne de caractères
 *
 * Return: La longueur de la chaîne
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * _strcpy - Copie une chaîne de caractères
 * @dest: Destination
 * @src: Source
 *
 * Return: Pointeur vers dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - Crée un nouveau chien
 * @name: Nom du chien
 * @age: Âge du chien
 * @owner: Propriétaire du chien
 *
 * Description: Cette fonction alloue de la mémoire pour un nouveau chien
 * et copie les informations fournies.
 *
 * Return: Pointeur vers le nouveau chien, NULL en cas d'échec
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	char *name_copy, *owner_copy;

	if (name == NULL || owner == NULL)
		return (NULL);

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	name_copy = malloc(sizeof(char) * (_strlen(name) + 1));
	if (name_copy == NULL)
	{
		free(new);
		return (NULL);
	}

	owner_copy = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(new);
		return (NULL);
	}

	_strcpy(name_copy, name);
	_strcpy(owner_copy, owner);

	new->name = name_copy;
	new->age = age;
	new->owner = owner_copy;

	return (new);
}
