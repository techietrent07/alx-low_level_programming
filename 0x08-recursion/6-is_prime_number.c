#include "main.h"

/**
 * is_prime_number - Tells if an integer is a prime number
 * @n: Number to check
 * Return: 1 if n is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - Tells if a number is a prime number using recursive approach
 * @n: Number to check
 * @i: Iterator
 * Return: 1 if n is a prime number, otherwise return 0
 */

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
