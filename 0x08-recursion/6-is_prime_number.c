#include "main.h"

/**
 * prime_helper - detects if an input number is a prime number.
 * @n: input number.
 * @divider: iterator.
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */
int prime_helper(unsigned int n, unsigned int divider)
{
	if (n % divider == 0)
	{
		if (n == divider)
			return (1);
		else
			return (0);
	}
	return (0 + prime_helper(n, divider + 1));
}
/**
 * is_prime_number - detects if an input number is a prime number.
 * @n: input number.
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (prime_helper(n, 2));
}
