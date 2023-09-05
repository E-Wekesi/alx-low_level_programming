#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of characters.
 * @size: size of the array.
 * @c: character
 * Return: pointer of an array of characters
 */
char *create_array(unsigned int size, char c)
{
	char *chars;
	unsigned int index;

	if (size == 0)
		return (NULL);

	chars = malloc(sizeof(c) * size);

	if (chars == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		chars[index] = c;

	return (chars);
}
