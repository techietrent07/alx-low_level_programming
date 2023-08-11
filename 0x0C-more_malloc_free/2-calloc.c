#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array using calloc
 * @nmemb: Number of array members
 * @size: Size of array
 * Return: A pointer to newly allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *outp;

	if (nmemb == 0 || size == 0)
		return (NULL);
	outp = calloc(nmemb, size);

	if (outp == NULL)
		return (NULL);
	else
		return (outp);
}
