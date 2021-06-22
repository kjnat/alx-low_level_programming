#include "holberton.h"
/**
 * main - prints Holberton as a message
 * Description - print Holberton
 * Return: Always 0
 */
int main(void)
{
	char i[9] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n'};
	unsigned int c;

	for (c = 0; c < sizeof(i); c++)
	{
		_putchar(i[c]);
	}
_putchar('\n');
return (0);
}
