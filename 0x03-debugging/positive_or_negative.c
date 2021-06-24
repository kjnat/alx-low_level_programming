#include <unistd.h>
#include "holberton.h"

/**
 * positive_or_negative - writes the character i to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int positive_or_negative(char c)
{
	return (write(1, &c, 1));
}
