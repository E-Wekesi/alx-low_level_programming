#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int number, digit;
for (number = 0; number < 100; number++)
{
for (digit = 0; digit < 100; digit++)
{
if (number < digit)
{
putchar((number / 10) + 48);
putchar((number % 10) + 48);
putchar(' ');
putchar((digit / 10) + 48);
putchar((digit % 10) + 48);
if (number != 98 || digit != 99)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
