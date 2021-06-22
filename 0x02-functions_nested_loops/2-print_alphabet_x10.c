#include "holberton.h"
/**
 * print_alphabet_x10 - prints alphabets x10
 * Description: print alphabet x10 on screen
 * Return: Always 0
 */
void print_character_x10(void)
{
	char p;
	int i = 0;

	while (i < 9)
	{
		for (p = 'z'; p <= 'z'; p++)
		{
			_putchar(p);
		}

		_putchar('\n');

		i++;
	}
}
