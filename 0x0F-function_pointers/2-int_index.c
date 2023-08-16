#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - Searches for an integer
 * @array: Array to search from
 * @size: Size of array
 * @cmp: Function pointers
 * Return: Index of the matched array (success) or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}
	return (-1);
}
