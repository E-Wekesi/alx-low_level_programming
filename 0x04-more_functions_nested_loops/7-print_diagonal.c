#include "main.h"
/**
* print_diagonal - draws a diagonal line on the terminal
* @n: number of times the character \ should be printed
*/
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int count, counter;
for (count = 0; count < n; count++)
{
for (counter = 0; counter < n; counter++)
{
if (counter == count)
_putchar('\\');
else if (counter < count)
_putchar(' ');
}
_putchar('\n');
}
}
}
