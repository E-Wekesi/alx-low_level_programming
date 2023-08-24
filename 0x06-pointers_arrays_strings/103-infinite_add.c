#include "main.h"
#include <stdio.h>
/**
 * infinite_add - adds two numbers
 * @n1: number one.
 * @n2: number two.
 * @r: buffer used to store the result.
 * @size_r: buffer size:
 * Return: Pointer
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int num1 = 0, num2 = 0, operation, big_number, digit1, digit2, sum = 0;

	while (*(n1 + num1) != '\0')
		num1++;
	while (*(n2 + num2) != '\0')
		num2++;
	if (num1 >= num2)
		big_number = num1;
	else
		big_number = num2;
	if (size_r <= big_number + 1)
		return (0);
	r[big_number + 1] = '\0';
	num1--, num2--, size_r--;
	digit1 = *(n1 + num1) - 48, digit2 = *(n2 + num2) - 48;
	while (big_number >= 0)
	{
		operation = digit1 + digit2 + sum;
		if (operation >= 10)
			sum = operation / 10;
		else
			sum = 0;
		if (operation > 0)
		*(r + big_number) = (operation % 10) + 48;
		else
			*(r + big_number) = '0';
		if (num1 > 0)
			num1--, digit1 = *(n1 + num1) - 48;
		else
			digit1 = 0;
		if (num2 > 0)
			num2--, digit2 = *(n2 + num2) - 48;
		else
			digit2 = 0;
		big_number--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
