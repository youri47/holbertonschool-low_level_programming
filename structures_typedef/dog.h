#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure représentant un chien
 * @name: Nom du chien (chaîne de caractères)
 * @age: Âge du chien (nombre à virgule flottante)
 * @owner: Propriétaire du chien (chaîne de caractères)
 *
 * Description: Cette structure contient les informations de base d'un chien
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* DOG_H */
