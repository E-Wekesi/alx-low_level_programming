#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring.
 * @haystack: the entire string to search.
 * @needle: the substring to locate.
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	char *begin_haystack;
	char *ptr_needle;

	while (*haystack != '\0')
	{
		begin_haystack = haystack;
		ptr_needle = needle;

		while (*haystack != '\0' && *ptr_needle != '\0' && *haystack == *ptr_needle)
		{
			haystack++;
			ptr_needle++;
		}
		if (!*ptr_needle)
			return (begin_haystack);
		haystack = begin_haystack + 1;
	}
	return (0);
}
