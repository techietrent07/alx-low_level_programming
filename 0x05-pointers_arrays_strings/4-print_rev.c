#include "main.h"

/**
 * print_rev - Prints string in reverse
 * @s: String to be printed
 * Return: void
 */

void print_rev(char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		count++;
	for (i = count - 1 ; i >= 0 ; i--)
		_putchar(s[i]);
	_putchar('\n');
}
