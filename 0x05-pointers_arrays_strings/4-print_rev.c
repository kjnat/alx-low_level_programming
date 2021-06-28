#include "holberton.h"

/**
 * print_rev - prints a string in reverse, followed by a new line.
 * @s: input string.
 * Return: no return.
 */
void print_rev(char *s)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		print_rev(str[count]);
		count++;
	}
}
