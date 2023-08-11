#include <stdio.h>
/**
* main -Entry point
*
* Return: ALways 0 (Success)
*/
int main(void)
{
int number, digit;for (number = 48; number <= 56; number++)
{
for (digit = 49; digit <= 57; digit++)
{
if (digit > number)
{
putchar(number);
putchar(digit);
if (number != 56 || digit != 57)
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
