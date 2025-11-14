#include "main.h"
/**
 * main - teste la fonction string_nconcat
 *
 * Return: 0 en cas de succes
 */
int main(void)
{
	char *concat;

	concat = string_nconcat("Best ", "School !!!", 6);
	printf("%s\n", concat);
	free(concat);
	concat = string_nconcat("Hello", " World", 20);
	printf("%s\n", concat);
	free(concat);
	concat = string_nconcat(NULL, "Test", 2);
	printf("%s\n", concat);
	free(concat);
	concat = string_nconcat("Test", NULL, 5);
	printf("%s\n", concat);
	free(concat);
	return (0);
}
