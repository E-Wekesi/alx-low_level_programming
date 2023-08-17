#include "main.h"
/**
* print_triangle - prints a triangle, followed by a new line
* @size: size of the triangle
*/
void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int count, counter;
for (count = 1; count <= size; count++)
{
for (counter = count; counter < size; counter++)
{
_putchar(' ');
}
for (counter = 1; counter <= count; counter++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
