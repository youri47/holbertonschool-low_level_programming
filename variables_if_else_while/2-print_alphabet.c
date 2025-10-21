#include <stdio.h> /* bibliothèque standard d'entrée/sortie */

/**
 * main - Affiche L'alphabet en minuscule , suivi d'une nouvelle ligne .
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alphabet = 97; /* Initialise 'alphabet' avec le code ASCII de 'a' */

	while (alphabet <= 122)
	{
		putchar(alphabet); /* Affiche le caractère correspondant au code ASCII */
		alphabet++;        /* Passe au caractère suivant */
	}
	putchar('\n'); /* Affiche un saut de ligne unique à la fin */

	return (0); /* Indique que le programme s'est exécuté avec succès */
}
