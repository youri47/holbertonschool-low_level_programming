#include <stdio.h>

char *_strncat(char *dest, char *src, int n);

/**
 * main - Point d'entree du programme
 *
 * Description: Teste la fonction _strncat avec differentes valeurs de n
 *
 * Return: Toujours 0 (Succes)
 */
int main(void)
{
	char dest1[50] = "Bonjour ";
	char dest2[50] = "Bonjour ";
	char dest3[50] = "Bonjour ";
	char src[] = "le monde!";

	printf("Test 1 - n=3:\n");
	printf("Avant: %s\n", dest1);
	_strncat(dest1, src, 3);
	printf("Apres: %s\n\n", dest1);

	printf("Test 2 - n=9:\n");
	printf("Avant: %s\n", dest2);
	_strncat(dest2, src, 9);
	printf("Apres: %s\n\n", dest2);

	printf("Test 3 - n=0:\n");
	printf("Avant: %s\n", dest3);
	_strncat(dest3, src, 0);
	printf("Apres: %s\n", dest3);

	return (0);
}
