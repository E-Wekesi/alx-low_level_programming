#include "variadic_functions.h"

/**
 * sum_them_all - adds all the numbers
 * @n: the number of parameters passed
 * Return: Always 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int index;
	va_list ap;

	va_start(ap, n);

	if (n == 0)
		return (0);

	for (index = 0; index < n; index++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
