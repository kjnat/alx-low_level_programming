#include "holberton.h"

/**
 * isdigit - checks for a digit.
 * @c: input character.
 * Return: 1 if is a digit, 0 in other case.
 */
int isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
