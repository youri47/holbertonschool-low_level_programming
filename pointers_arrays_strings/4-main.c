#include <stdio.h>

void reverse_array(int *a, int n);

/**
 * print_array - Affiche n elements d'un tableau d'entiers
 * @a: Le tableau d'entiers
 * @n: Le nombre d'elements a afficher
 *
 * Return: Rien (void)
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i != 0)
		{
			printf(", ");
		}
		printf("%d", a[i]);
		i++;
	}
	printf("\n");
}

/**
 * main - Point d'entree du programme
 *
 * Description: Teste la fonction reverse_array
 *
 * Return: Toujours 0 (Succes)
 */
int main(void)
{
	int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};

	print_array(a, sizeof(a) / sizeof(int));
	reverse_array(a, sizeof(a) / sizeof(int));
	print_array(a, sizeof(a) / sizeof(int));

	return (0);
}
