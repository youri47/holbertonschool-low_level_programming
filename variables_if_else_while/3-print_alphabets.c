#include <stdio.h> /* Inclut la bibliothèque standard d'entrée/sortie */

/**
 * main - Affiche l'alphabet en minuscule, puis en majuscule,
 * chaque séquence suivie d'une nouvelle ligne.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alphabet; /* Déclare une variable pour stocker les codes ASCII */

	/* Première boucle : affiche l'alphabet en minuscules */
	alphabet = 97; /* Initialise avec le code ASCII de 'a' */
	while (alphabet <= 122) /* Tant que c'est une lettre minuscule */
	{
		putchar(alphabet); /* Affiche le caractère */
		alphabet++;        /* Passe au caractère suivant */
	}


	alphabet = 65; /* Initialise avec le code ASCII de 'A' */
	while (alphabet <= 90) /* Tant que c'est une lettre majuscule */
	{
		putchar(alphabet); /* Affiche le caractère */
		alphabet++;        /* Passe au caractère suivant */
	}
	putchar('\n'); /* un saut de ligne  */

	return (0); /* Indique que le programme s'est exécuté avec succès */
}
