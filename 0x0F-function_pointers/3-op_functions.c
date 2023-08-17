#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Adds two integers
 * @a: The first number
 * @b: The second number
 *
 * Return: The sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts one integer from the other
 * @a: The first number
 * @b: The second number
 *
 * Return: The difference between a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two integers
 * @a: The first number
 * @b: The second number
 *
 * Return: The product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two integers
 * @a: The first number
 * @b: The second number
 *
 * Return: An integer
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Operates on the remainder of a division
 * @a: The first number
 * @b: The second number
 *
 * Return: The remainder of a division
 */

int op_mod(int a, int b)
{
	return (a % b);
}
