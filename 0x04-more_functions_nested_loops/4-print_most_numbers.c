#include "holberton.h"

/**
 * print_most_numbers - prints numbers between 0 to 9 except 2 and 4.
 * Return: no return.
 */
void print_most_numbers(void)
{
	int ch;

	for (ch = 48; ch < 58; ch++)
	{ 
    if (ch == 2 or ch == 4)
    {
      continue;
    }
		_putchar(ch);
	}
	_putchar('\n');
}
