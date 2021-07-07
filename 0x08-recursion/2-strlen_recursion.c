#include "holberton.h"
/**
 * _strlen_recursion - function that returns length of a string
 * @s: string
 * Return: length of a string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}

	return (len);
}
