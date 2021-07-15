#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b: the number of bytes
 * @Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	char *allocated_memory;

	allocated_memory = malloc(sizeof(b));
	if (allocated_memory == NULL)
		exit(98);
	return (allocated_memory);
}
