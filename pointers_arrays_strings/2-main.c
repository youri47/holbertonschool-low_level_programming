#include <stdio.h>

char *_strncpy(char *dest, char *src, int n);

/**
 * main - Point d'entree du programme
 *
 * Description: Teste la fonction _strncpy avec differentes valeurs
 *
 * Return: Toujours 0 (Succes)
 */
int main(void)
{
	char s1[98];
	char *ptr;
	int i;

	for (i = 0; i < 98 - 1; i++)
	{
		s1[i] = '*';
	}
	s1[i] = '\0';
	printf("Avant: %s\n", s1);
	ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 5);
	printf("Apres (n=5): %s\n", s1);
	printf("ptr: %s\n", ptr);
	
	ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 90);
	printf("Apres (n=90):\n%s", s1);
	printf("ptr:\n%s", ptr);
	
	for (i = 0; i < 98; i++)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", s1[i]);
	}
	printf("\n");

	return (0);
}
