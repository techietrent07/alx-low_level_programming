#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - Creates an array of integers
 * @min: Minimum range of values stored
 * @max: Maximum range of values stored and number of elements
 * Return: A pointer to the new array
 */

int *array_range(int min, int max)
{
	int i, size;
	int *outp;

	if (min > max)
		return (NULL);
	size = max - min + 1;

	outp = malloc(sizeof(int) * size);

	if (outp == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		outp[i] = min++;

	return (outp);
}
