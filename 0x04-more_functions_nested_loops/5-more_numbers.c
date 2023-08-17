#include "main.h"
/**
* more_numbers - print numbers
*/
void more_numbers(void)
{
int count, counter;
for (count = 1; count <= 10; count++)
{
for (counter = 0; counter <= 14; counter++)
{
if (counter >= 10)
_putchar('1');
_putchar (counter % 10 + '0');
}
_putchar('\n');
}
}
