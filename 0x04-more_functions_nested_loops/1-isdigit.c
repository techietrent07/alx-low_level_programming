#include "main.h"

/**
 * _isdigit - Function that checks for 0 through 9
 * @c: Parameter to be checked
 * Return: 1 0n success, on failure
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
