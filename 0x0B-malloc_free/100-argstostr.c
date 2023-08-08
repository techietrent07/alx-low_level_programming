#include "main.h"

/**
 * argstostr - function that concatenates all the arguments of a program.
 * @ac: Integer input
 * @av: Double pointer array
 * Return: A pointer to the new string
 */

char *argstostr(int ac, char **av)
{
	int i, n, c = 0, d = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			d++;
	}
	d += ac;

	str = malloc(sizeof(char) * d + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			str[c] = av[i][n];
			c++;
		}
	if (str[c] == '\0')
	{
		str[c++] = '\n';
	}
	}
	return (str);
}
