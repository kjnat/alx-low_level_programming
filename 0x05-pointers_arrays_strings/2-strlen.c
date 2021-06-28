#include "holberton.h"
#include <string.h>
/**
 * _strlen - Function that returns the length of a string
 * @s: string character
 * Return: len of a string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
			len++;
	Return (len);
}
