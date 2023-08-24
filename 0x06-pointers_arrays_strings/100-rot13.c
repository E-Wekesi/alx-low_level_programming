#include "main.h"

/**
 * rot13 -  encoder for rot13.
 * @s: An input string to encode using rot13
 * Return: *s
 */
char *rot13(char *s)
{
	int index = 0;

	while (s[index] != '\0')
	{
		while ((s[index] >= 'a' && s[index] <= 'z') ||
				(s[index] >= 'A' && s[index] <= 'Z'))
		{
			if ((s[index] >= 'a' && s[index] <= 'm') ||
					(s[index] >= 'A' && s[index] <= 'M'))
				s[index] += 13;
			else
				s[index] -= 13;
			index++;
		}
		index++;
	}
	return (s);
}
