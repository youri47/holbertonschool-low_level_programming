#include <stdio.h>

int _strcmp(char *s1, char *s2);

/**
 * main - Point d'entree du programme
 *
 * Description: Teste la fonction _strcmp avec differentes chaines
 *
 * Return: Toujours 0 (Succes)
 */
int main(void)
{
	int result;

	result = _strcmp("Hello", "Hello");
	printf("Compare 'Hello' et 'Hello': %d\n", result);

	result = _strcmp("Hello", "World");
	printf("Compare 'Hello' et 'World': %d\n", result);

	result = _strcmp("World", "Hello");
	printf("Compare 'World' et 'Hello': %d\n", result);

	result = _strcmp("Hello", "Hello!");
	printf("Compare 'Hello' et 'Hello!': %d\n", result);

	result = _strcmp("Hello!", "Hello");
	printf("Compare 'Hello!' et 'Hello': %d\n", result);

	result = _strcmp("", "Hello");
	printf("Compare '' et 'Hello': %d\n", result);

	result = _strcmp("Hello", "");
	printf("Compare 'Hello' et '': %d\n", result);

	return (0);
}
