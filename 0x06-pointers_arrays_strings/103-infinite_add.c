#include "main.h"
#include <stdio.h>

/**
 * infinite_add - Adds two numbers
 * @n1: First number as a string
 * @n2: Second number as a string
 * @r: Buffer to store the result
 * @size_r: Size of the buffer
 *
 * Return: Pointer to the result (r)
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, operation, bigger_len, digit1, digit2, sum = 0;

	while (*(n1 + len1) != '\0')
		len1++;
	while (*(n2 + len2) != '\0')
		len2++;

	if (len1 >= len2)
		bigger_len = len1;
	else
		bigger_len = len2;

	if (size_r <= bigger_len + 1)
		return (0);

	r[bigger_len + 1] = '\0';
	len1--, len2--, size_r--;

	digit1 = *(n1 + len1) - '0';
	digit2 = *(n2 + len2) - '0';

	while (bigger_len >= 0)
	{
		operation = digit1 + digit2 + sum;

		if (operation >= 10)
			sum = operation / 10;
		else
			sum = 0;

		if (operation > 0)
			*(r + bigger_len) = (operation % 10) + '0';
		else
			*(r + bigger_len) = '0';

		if (len1 > 0)
			len1--, digit1 = *(n1 + len1) - '0';
		else
			digit1 = 0;

		if (len2 > 0)
			len2--, digit2 = *(n2 + len2) - '0';
		else
			digit2 = 0;

		bigger_len--, size_r--;
	}

	if (*r == '0')
		return (r + 1);
	else
		return (r);
}
