#include <stdio.h>

char *cap_string(char *);

/**
 * main - Point d'entree du programme
 *
 * Description: Teste la fonction cap_string
 *
 * Return: Toujours 0 (Succes)
 */
int main(void)
{
	char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
	char *ptr;

	ptr = cap_string(str);
	printf("%s", ptr);
	printf("%s", str);

	return (0);
}
