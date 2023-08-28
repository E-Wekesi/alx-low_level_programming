#include "main.h"

/**
 * _strspn - calculates the length of a prefix substring.
 * @s: string to search.
 * @accept: set of characters.
 * Return: the length of the prefix substring.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, match_found;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		match_found = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				match_found = 0;
				break;
			}
		}
		if (match_found == 1)
			break;
	}
	return (i);
}
