#include "main.h"
/**
* puts_half - a function that prints half of a string
* if odd len, n = (length_of_the_string - 1) / 2
* @str: input
* Return: half of input
*/
void puts_half(char *str)
{
int r, s_length, long_int;
long_int = 0;
for (r = 0; str[r] != '\0'; r++)
long_int++;
s_length = (long_int / 2);
if ((long_int % 2) == 1)
n = ((long_int + 1) / 2);
for (r = s_length; str[r] != '\0'; r++)
_putchar(str[r]);
_putchar('\n');
}
