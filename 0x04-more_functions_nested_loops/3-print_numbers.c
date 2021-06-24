#include "holberton.h"

/**
 * print_numbers - Print numbers from 0 to 9.
 * @c: Print c to stdout
 */
void print_numbers(void)
{
  int c;
  
	for (c = 48; c < 58; c++)
  {
    _putchar(c);
  }
  _putchar('\n');
}
