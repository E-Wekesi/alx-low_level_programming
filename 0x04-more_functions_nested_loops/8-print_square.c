#include "main.h"
/**
* print_square - prints a square, followed by a new line;
* @size: size of the square
*/
void print_square(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int x, b;
for (x = 0; x < size; x++)
{
for (b = 0; b < size; b++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
