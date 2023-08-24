#include "main.h"

/**
 * reverse_array -  function that reverses the content of an array of integers.
 * @a: an array.
 * @n: number of elements in array.
 */

void reverse_array(int *a, int n)
{
	int counter;
	int count;

	counter = 0;
	while (counter < n)
	{
		n--;
		count = a[counter];
		a[counter] = a[n];
		a[n] = count;
		counter++;
	}
}
