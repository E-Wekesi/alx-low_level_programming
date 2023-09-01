#include "main.h"

/**
 * _strcmp -  function that compares two strings.
 * @s1: Input number.
 * @s2: Input number.
 * Return: 0.
 */

int _strcmp(char *s1, char *s2)
{
	int result = 0;

	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	if (s1 != s2)
		result = *s1 - *s2;

	return (result);
}
