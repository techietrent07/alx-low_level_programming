#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Executes function on every element of array
 * @array: Array
 * @size: Size of the array
 * @action: Function to perform on every element of the array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
