#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Size of memory
 * Return: A pointer to the new memory allocated
 */

void *malloc_checked(unsigned int b)
{
	char *outp;

	outp = malloc(b);
	if (outp == NULL)
		exit(98);
	else
		return (outp);
}

