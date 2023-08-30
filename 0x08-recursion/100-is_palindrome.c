#include "main.h"
/**
 * _strlen_recursion - returns the length of a string..
 * @s: the string to be printed
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
/**
 * is_palindrome_checker - check if s is palindrome.
 * @s: string base address.
 * @i: 1st iterator.
 * @j: 2nd iterator.
 * Return: 1 if s is palindrome, 0 otherwise.
 */
int is_palindrome_checker(char *s, int index1, int index2)
{
	if (s[index1] == s[index2])
		if (index1 > index2 / 2)
			return (1);
		else
			return (is_palindrome_checker(s, index1 + 1, index2 - 1));
	else
		return (0);
}
/**
 * is_palindrome - check if the input is palindrome
 * @s: base address for string.
 *
 * Return: 1 if s is palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	return (is_palindrome_checker(s, 0, _strlen_recursion(s) - 1));
}
