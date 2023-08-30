#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string
 * Return: the length of a string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * checker - compares each instance of the string.
 * @s: string
 * @index1: left index.
 * @index2: right index.
 * Return: .
 */
int checker(char *s, int index1, int index2)
{
	if (*(s + index1) == *(s + index2))
	{
		if (index1 == index2 || index1 == index2 + 1)
			return (1);
		return (0 + checker(s, index1 + 1, index2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome.
 * @s: string.
 * Return: 1 if s is a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (checker(s, 0, _strlen_recursion(s) - 1));
}
