#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: String to be counted
 * Return: Number of words
 */

int count_word(char *s)
{
	int count, c, d;

	count = 0;
	d = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			count = 0;
		else if (count == 0)
		{
			count = 1;
			d++;
		}
	}
	return (d);
}

/**
 * **strtow - Splits a string into words
 * @str: String to split
 * Return: A pointer to an array of strings (Success) or NULL (Error)
 */

char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, a = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[a] = tmp - c;
				a++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	matrix[a] = NULL;

	return (matrix);
}
