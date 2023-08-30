#include "main.h"

/**
 * sqrt_guess - helper to find natural square root of a number.
 * @n: input number.
 * @helper: current iterator.
 * Return: square root or -1 if there is no natural sqrt.
 */
int sqrt_guess(int n, int helper)
{
	if (helper % (n / helper) == 0)
	{
		if (helper * (n / helper) == n)
			return (helper);
		else
			return (-1);
	}
	return (0 + sqrt_guess(n, helper + 1));
}
/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The input number to find square root.
 * Return: Square root of iput.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (sqrt_guess(n, 2));
}
