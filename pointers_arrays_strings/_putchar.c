#include <unistd.h>

/**
 * _putchar - écrit le caractère c sur stdout
 * @c: Le caractère à afficher
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
