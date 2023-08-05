#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: The string to be searched
 * @needle: The substring to be located
 * Return: If the substring is located, a pointer to the
 * beginning of the located substring
 * if the substring is not located, NULL
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *p = needle;

		while (*i == *p && *p != '\0')
		{
			i++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}
	return (NULL);
}
