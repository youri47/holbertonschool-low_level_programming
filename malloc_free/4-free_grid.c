#include "main.h"

/**
 * free_grid - Libère une grille 2D créée par alloc_grid
 * @grid: La grille à libérer
 * @height: Hauteur de la grille
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
