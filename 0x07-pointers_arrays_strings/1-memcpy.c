#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: Destination location
 * @src: Source location
 * @n: Number of bytes to copy
 * Return: Pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0 ; j < n ; j++)
		dest[j] = src[j];
	return (dest);
}
