#include "main.h"

/**
 * _strpbrk - finds the first occurrence of a character from a set.
 * @s: the string to search.
 * @accept: set of characters to search for.
 * Return: a pointer to the first matching character in source,
 * or NULL if no match is found.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int ch1, ch2;

	for (ch1 = 0; *(s + ch1) != '\0'; ch1++)
	{
		for (ch2 = 0; *(accept + ch2) != '\0'; ch2++)
		{
			if (*(s + ch1) == *(accept + ch2))
				return (s + ch1);
		}
	}
	return ('\0');
}
