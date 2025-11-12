#include "main.h"

/**
 * print_grid - Affiche une grille d'entiers
 * @grid: La grille à afficher
 * @width: Largeur de la grille
 * @height: Hauteur de la grille
 *
 * Return: void
 */
void print_grid(int **grid, int width, int height)
{
	int i, j;

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			if (j)
				printf(" ");
			printf("%d", grid[i][j]);
		}
		printf("\n");
	}
}

/**
 * main - Point d'entrée du programme
 *
 * Return: 0 si succès, 1 sinon
 */
int main(void)
{
	int **grid;
	int i;

	grid = alloc_grid(6, 4);
	if (grid == NULL)
	{
		printf("Echec de l'allocation\n");
		return (1);
	}
	print_grid(grid, 6, 4);
	printf("\n");
	grid[0][3] = 98;
	grid[3][4] = 402;
	print_grid(grid, 6, 4);

	for (i = 0; i < 4; i++)
		free(grid[i]);
	free(grid);

	return (0);
}
