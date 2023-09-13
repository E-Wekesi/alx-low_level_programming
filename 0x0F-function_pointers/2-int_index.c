#include "function_pointers.h"

/**
  * int_index - function body
  * @array: array 
  * @size: number of arguments
  * @cmp: input
  * Return: 0
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (index < size)
			{
				if (cmp(array[index]))
					return (index);

				index++;
			}
		}
	}

	return (-1);
}
