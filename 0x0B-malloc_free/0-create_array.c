#include "main.h"

/**
 * create_array - Function that creates an array of chars
 * @size: Size of array
 * @c: Character to be stored in array
 * Return: A pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
