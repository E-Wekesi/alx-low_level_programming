#include "main.h"
#include <string.h>

/**
 * _strncat -  function that concatenates two strings.
 * @src: copier
 * @dest: inout value
 * @n: number.
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int num = strlen(dest);
	int a = 0;

	while (a < n && *src)
	{
		dest[num + a] = *src;
		src++;
		a++;
	}
	dest[num + a] = '\0';
	return (dest);
}
