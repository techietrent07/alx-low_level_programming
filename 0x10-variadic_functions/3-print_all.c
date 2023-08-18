#include "variadic_functions.h"

/**
 * print_all - A function that prints anything
 * @format: A list of types of arguments passed to the function
 * @...: The variable number
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i;
	char *str, *separ = "";
	va_list arg;

	va_start(arg, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separ, va_arg(arg, int));
				break;
			case 'i':
				printf("%s%d", separ, va_arg(arg, int));
				break;
			case 'f':
				printf("%s%f", separ, va_arg(arg, double));
				break;
			case 's':
				str = va_arg(arg, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", separ, str);
				break;
			default:
				i++;
				continue;
		}
		separ = ", ";
		i++;
	}
	printf("\n");
	va_end(arg);
}
