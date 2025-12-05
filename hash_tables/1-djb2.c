#include "hash_tables.h"

/**
 * hash_djb2 - Fonction de hachage implémentant l'algorithme djb2
 * @str: Chaîne de caractères à hasher
 *
 * Description: L'algorithme djb2 a été créé par Dan Bernstein.
 * C'est une fonction de hachage simple mais efficace qui utilise
 * la formule: hash = hash * 33 + caractère
 * Le nombre magique 5381 est le point de départ optimal testé par djb2.
 *
 * Return: La valeur de hachage calculée
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	/* Initialisation avec le nombre magique 5381 */
	hash = 5381;

	/* Parcourir chaque caractère de la chaîne */
	while ((c = *str++))
	{
		/* Formule djb2: hash * 33 + c */
		/* (hash << 5) équivaut à hash * 32 */
		/* Donc (hash << 5) + hash = hash * 33 */
		hash = ((hash << 5) + hash) + c;
	}

	return (hash);
}
