#include <stdio.h>

char *string_toupper(char *);

/**
 * main - Point d'entree du programme
 *
 * Description: Teste la fonction string_toupper
 *
 * Return: Toujours 0 (Succes)
 */
int main(void)
{
	char str[] = "Look up!\n";
	char *ptr;

	ptr = string_toupper(str);
	printf("%s", ptr);
	printf("%s", str);

	return (0);
}
