#include "variadic_functions.h"

/**
 * print_strings - A function that prints strings
 * @separator: The string to be printed between the strings
 * @n: The number of strings passed to the function
 * @...: The variable number of strings
 *
 * Return: Printed strings (Success), or (nil) if one of the
 * strings is NULL
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strings;
	char *str;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);

}
