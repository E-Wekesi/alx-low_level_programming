#include "main.h"
/**
* puts2 - function should print only one character out of two
* starting with the first one
* @str: input
* Return: print
*/
void puts2(char *str)
{
int long_int = 0;
int count = 0;
char *a = str;
int r;
while (*a != '\0')
{
a++;
long_int++;
}
count = long_int - 1;
for (r = 0 ; r <= count ; r++)
{
if (r % 2 == 0)
{
_putchar(str[r]);
}
}
_putchar('\n');
}
