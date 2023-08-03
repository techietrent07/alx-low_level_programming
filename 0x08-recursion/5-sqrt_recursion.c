#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: Number to calculate the square root of
 * Return: The resulting value of the square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - Function that recurses to find the natural
 *square root of a number using recursive approach
 * @n: Number to calculate the square root of
 * @i: Iterator
 * Return: The square root of the number, else -1
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
