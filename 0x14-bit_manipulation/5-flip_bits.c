#include "main.h"

/**
 * flip_bits - a function that returns the number
 * of bits you would need to flip to get from one number to another.
 * @n: The first number
 * @m: The second number
 * Return: number of bits you would need to
 * flip to get from one number to another.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, count = 0;
	unsigned long int flip;
	unsigned long int bits = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		flip = bits >> j;
		if (flip & 1)
			count++;
	}
	return (count);
}


