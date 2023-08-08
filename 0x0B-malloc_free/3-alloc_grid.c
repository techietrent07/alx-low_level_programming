#include "main.h"

/**
 * alloc_grid - Function that returns a pointer to a
 * 2 dimensional array of integers
 * @width: Number of columns
 * @height: Number of rows
 * Return: A pointer to the array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **outp;

	if (width <= 0 || height <= 0)
		return (NULL);
	outp = malloc(sizeof(int *) * height);

	if (outp == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		outp[i] = malloc(sizeof(int) * width);

		if (outp[i] == NULL)
		{
			free(outp);
			for (j = 0; j <= height; j++)
				free(outp[j]);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			outp[i][j] = 0;
	}
	return (outp);
}
