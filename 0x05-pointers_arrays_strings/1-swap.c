#include "holberton.h"
/**
 * swap_int - function to swap two integers a and b
 * @a: First integer
 * @b: Second integer
 * @c: Third integer
 * Return: no return
 */
void swap_int(int *a, int *b)
{
	int *c;

	*c = *b;
	*a = *b;
	*c = *a;
}
