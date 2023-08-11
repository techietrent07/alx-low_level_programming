#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: String 1
 * @s2: String 2
 * @n: Number of bytes to concatenate from s2
 * Return: Concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int s1len = 0;
	unsigned int s2len = 0;
	char *outp;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		s1len++;
	for (i = 0; s2[i] != '\0'; i++)
		s2len++;

	outp = malloc(sizeof(char) * (s1len + n) + 1);

	if (outp == NULL)
		return (NULL);
	if (n >= s2len)
	{
		for (i = 0; s1[i] != '\0'; i++)
			outp[i] = s1[i];
		for (i = 0; s2[i] != '\0'; i++)
			outp[s1len + i] = s2[i];
		outp[s1len + i] = '\0';
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			outp[i] = s1[i];
		for (i = 0; i < n; i++)
			outp[s1len + i] = s2[i];
		outp[s1len + i] = '\0';
	}
	return (outp);
}
