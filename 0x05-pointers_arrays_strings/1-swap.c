#include "holberton.h"

/**
 * swap_int - Function to swap two integers a and b
 * @a: First integer
 * @b: Second integer
 * Return: no return
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
