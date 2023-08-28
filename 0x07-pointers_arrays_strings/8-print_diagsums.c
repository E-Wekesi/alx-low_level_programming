#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of integers
 * @a: input pointer.
 * @size: size of the matrix
 * Return: no return.
 */
void print_diagsums(int *a, int size)
{
	int num1, sum1 = 0, sum2 = 0;

	for (num1 = 0; num1 < (size * size); num1++)
	{
		if (num1 % (size + 1) == 0)
			sum1 += *(a + num1);
		if (num1 % (size - 1) == 0 && num1 != 0 && num1 < size * size - 1)
			sum2 += *(a + num1);
	}
	printf("%d, %d\n", sum1, sum2);
}
