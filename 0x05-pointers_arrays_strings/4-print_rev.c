#include "main.h"
/**
* print_rev - imprime en reversa
* @s: string
* return: 0
*/
void print_rev(char *s)
{
int long_int = 0;
int reverse;
while (*s != '\0')
{
long_int++;
s++;
}
s--;
for (reverse = long_int; reverse > 0; reverse--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
