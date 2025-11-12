#include "main.h"

/**
 * alloc_grid - Crée un tableau 2D d'entiers
 * @width: Largeur de la grille
 * @height: Hauteur de la grille
 *
 * Return: Pointeur vers la grille 2D, ou NULL si échec
 */
int **alloc_grid(int width, int height)
{
	int **grille;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grille = malloc(sizeof(int *) * height);

	if (grille == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grille[i] = malloc(sizeof(int) * width);

		if (grille[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grille[j]);
			free(grille);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grille[i][j] = 0;
	}

	return (grille);
}
