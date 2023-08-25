#include <stdio.h>

/**
 * befmain - A function that prints before
 * the main function is executed
 * Return: 0
 */

void __attribute__ ((constructor)) befmain(void)
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
