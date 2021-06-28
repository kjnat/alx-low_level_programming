#include "holberton.h"

/**
 * puts2- prints every other character of a string, starting with the first character, followed by a new line.
 * @str: input string.
 * Return: no return.
 */
void puts2(char *str)
{
	int count = 0, i;

	while (count >= 0)
	{
		if (str[count] == '\0')
			break;
		count++;
	}
  for (i = 0; i <= count; i+=2)
    puts(str[count]);
  puts('\n');
}
