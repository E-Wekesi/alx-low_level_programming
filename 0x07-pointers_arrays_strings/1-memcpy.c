#include "main.h"
/**
 * _memcpy - copies memory area,
 * @dest: destination .
 * @src: source memory area.
 * @n: bytes to be filled.
 * Return: the pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int num1;

	for (num1 = 0; num1 < n; num1++)
		*(dest + num1) =  *(src + num1);

	return (dest);
}
