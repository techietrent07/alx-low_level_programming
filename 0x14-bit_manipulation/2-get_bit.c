#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index
 * @index: the index, starting from 0 of the bit you want to get
 * @n: Integer
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int value_bin;

	if (index > 63)
		return (-1);

	value_bin = (n >> index) & 1;

	return (value_bin);
}
