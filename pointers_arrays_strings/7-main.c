#include <stdio.h>

void puts_half(char *str);

/**
 * main - teste la fonction puts_half
 *
 * Return: Toujours 0.
 */
int main(void)
{
	char *str;

	str = "0123456789";
	puts_half(str);

	str = "Hello World!";
	puts_half(str);

	str = "Betty Holberton";
	puts_half(str);

	return (0);
}
