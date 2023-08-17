#include "variadic_functions.h"

/**
 * sum_them_all - Function that returns the sum of its parameters
 * @n: The number of parameters the function calls
 * @...: A variable number of parameters to find the sum
 * Return: The added value (Success) or 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list arg;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(arg, int);
	}
	va_end(arg);

	return (sum);
}
