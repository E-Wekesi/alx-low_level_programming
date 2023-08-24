#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @src: input
 * @dest: input.
 * Return: dest.
 */

char *_strcat(char *dest, char *src)
{
	int num;
	int num1;

	num = 0;
	while (dest[num] != '\0')
	{
		num++;
	}
	num1 = 0;
	while (src[num1] != '\0')
	{
		dest[num] = src[num1];
		num++;
		num1++;
	}
	dest[num] = '\0';
	return (dest);
}
