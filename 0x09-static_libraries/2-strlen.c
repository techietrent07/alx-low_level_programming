#include "main.h"

/**
 * _strlen - finds the length of the string
 * @s: String to be counted
 * Return: Length of the string
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		count++;
	return (count);
}

