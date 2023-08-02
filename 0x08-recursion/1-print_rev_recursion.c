#include "main.h"

/**
 * _print_rev_recursion - Prints strings in reverse
 * @s: String in reverse
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
