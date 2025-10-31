#include <stdio.h>

char *leet(char *);

/**
 * main - Point d'entree du programme
 *
 * Description: Teste la fonction leet
 *
 * Return: Toujours 0 (Succes)
 */
int main(void)
{
	char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
	char *ptr;

	ptr = leet(str);
	printf("%s", ptr);
	printf("%s", str);

	return (0);
}
