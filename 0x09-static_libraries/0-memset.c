#include "main.h"
/**
 * _memset - fills memory with a constant byte,
 * @s: memory area.
 * @b: constant .
 * @n: bytes to be filled.
 * Return: the pointer to destination.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int num1;

	for (num1 = 0; num1 < n; num1++)
		*(s + num1) =  b;

	return (s);
}
