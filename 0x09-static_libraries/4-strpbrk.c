#include "main.h"

/**
 * _strpbrk - Function that searches a string for any of a set of bytes
 * @s: String to be searched
 * @accept: String to search for
 * Return: Number of characters matched
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0 ; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');

}
