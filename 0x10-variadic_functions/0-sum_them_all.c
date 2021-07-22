#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: number of integer arguments
 * @Return: 0 if n is 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum = 0;

	va_start(ap, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);

}

