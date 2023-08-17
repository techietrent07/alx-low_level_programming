#include "variadic_functions.h"

/**
 * print_numbers - Functions that prints numbers of the called parameters
 * @n: The number of integers passed to the function
 * @separator: The string to be printed between numbers
 * @...: A variable number of parameters
 *
 * Return: The printed parameters
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	va_start(arg, n);
	if (separator == NULL)
		return;
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
