#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number
 * @n: The integer to print the binary rep.
 * Return: 0 (Success)
 */

void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int binary;

	for (i = 63; i >= 0; i--)
	{
		binary = n >> i;

		if (binary & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
