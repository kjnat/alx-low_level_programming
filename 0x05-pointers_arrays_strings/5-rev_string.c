#include "holberton.h"

/**
 * rev_string - function to reverse a string
 * @s: input string.
 * Return: no return.
 */
void rev_string(char *s)
{
	int count = 0, i, temp;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}

	for (i = 0; i < count/2; i++)
	{
		temp=s[i];
		s[i]=s[n-i-1];
		s[n-i-1]=temp;
	}
}
