#include "holberton.h"
/**
 * _strchr - function that locates a character in a string
 * @s: string
 * @c: character in string
 * Return: pointer to string
 */
char *_strchr(char *s, char c)
{
	int count = 0;

	while (count >= 0)
	{
		if (s[count] == '\0')
		{
			if (s[count] == c)
			{
				return (count);
				break;
			}
			if (s[count] != c)
			{
				return (null);
			}
			count++;
		}
	}

}
