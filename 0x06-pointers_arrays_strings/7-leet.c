#include "main.h"
/**
 * leet -  encodes a string into 1337
 * @s: string to code
 * Return: the enconde string.
 */
char *leet(char *s)
{
	int count;
	int counter;
	int store;

	char ch1[] = "oOlLeEaAtT";
	char ch2[] = "0011334477";

	count = 0;
	while (s[count] != '\0')
	{
		counter = 0;
		store = 0;
		while (ch1[counter] != '\0')
		{
			if (s[count] == ch1[counter])
			{
				store = counter;
				s[count] = ch2[store];
			}
			counter++;
		}
		count++;
	}
	return (s);
}
