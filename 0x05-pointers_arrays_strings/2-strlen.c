#include "holberton.h"
#include <string.h>
/**
 * _strlen - Function that returns the length of a string
 * @s: string character
 * Return: len of a string
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
			count++;
	Return (count);
}
