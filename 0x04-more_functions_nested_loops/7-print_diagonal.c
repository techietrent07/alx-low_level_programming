#include "main.h"

/**
 * print_diagonal - Prints diagonal using the '\' character
 * @n: Number of times the '\' should be printed
 * Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i, j;

		for (i = 0 ; i < n ; i++)
		{
			for (j = 0 ; j < i ; j++)
				_putchar(32);
			_putchar(92);
			_putchar('\n');
		}
	}
}

