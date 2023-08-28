#include "main.h"
/**
 * _strchr - locates character in a string,
 * @s: string.
 * @c: character.
 * Return: the pointer to the first appearance of the character c.
 */
char *_strchr(char *s, char c)
{
	unsigned int s1 = 0;

	for (; *(s + s1) != '\0'; s1++)
		if (*(s + s1) == c)
			return (s + s1);
	if (*(s + s1) == c)
		return (s + s1);
	return ('\0');
}
