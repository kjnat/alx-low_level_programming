#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to be allocated
 * @Return: a pointer to the allocated memory
 * if malloc fails, status value is 98
 */
void *malloc_checked(unsigned int b)
{
	char *allocated_memory;

	allocated_memory = malloc(sizeof(b));
	if (allocated_memory == NULL)
		exit(98);
	return (allocated_memory);
}
