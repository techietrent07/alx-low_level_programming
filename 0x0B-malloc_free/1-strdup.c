#include "main.h"

/**
 * _strdup - Copies string to newly allocated space to memory
 * @str: String to copy to new memory
 * Return: A pointer to new memory
 */

char *_strdup(char *str)
{
	int i;
	char *cp;
	int count = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		count++;

	cp = malloc(sizeof(char) * count + 1);

	if (cp == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		cp[i] = str[i];

	return (cp);
}
