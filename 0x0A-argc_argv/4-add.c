#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: command line arguments
 * @argv: array that contains command line argument
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	if (argc != 2)
		printf("0\n");
	else if (argc < 48 && argc > 57)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) + atoi(argv[2]));

	return (0);
}

