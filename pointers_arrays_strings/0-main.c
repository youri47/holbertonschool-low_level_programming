#include <stdio.h>

char *_strcat(char *dest, char *src);

int main(void)
{
	char dest[50] = "Bonjour ";
	char src[] = "le monde!";

	printf("Avant: %s\n", dest);
	_strcat(dest, src);
	printf("Après: %s\n", dest);

	return (0);
}
