#include "holberton.h"
/**
 * main - prints Holberton as a message
 * Description - print Holberton
 * Return: Always 0
 */
int main(void)
{
	int str[] = {72, 111, 108, 98, 101, 114, 116, 111, 110};
	int count, sb;
	sb = sizeof(str) / sizeof(int);
	for (count = 0; count < sb; sb++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
	return (0);
}
