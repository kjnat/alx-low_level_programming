#include "holberton.h"

/**
 * rev_string - function to reverse a string
 * @s: input string.
 * Return: no return.
 */
void rev_string(char *s)
{
	int count = 0;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}

	for (count--; count >= 0; count--)
}
