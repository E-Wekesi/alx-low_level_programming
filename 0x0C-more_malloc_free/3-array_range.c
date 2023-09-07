#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: minimum value.
 * @max: maximum value.
 * Return: pointer to the newly created array.
 * if man > mix, returns NULL.
 * if malloc fails, returns NULL.
 */
int *array_range(int min, int max)
{
	int *arg;
	int i;

	if (min > max)
		return (NULL);

	arg = malloc(sizeof(*arg) * ((max - min) + 1));

	if (arg == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		arg[i] = min;

	return (arg);
}
