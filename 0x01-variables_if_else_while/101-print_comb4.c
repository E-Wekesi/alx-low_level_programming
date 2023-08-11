#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int number, digit, num;
for (number = 48; number < 58; number++)
{
for (digit = 49; digit < 58; digit++)
{
for (num = 50; num < 58; num++)
{
if (num > digit && digit > number)
{
putchar(number);
putchar(digit);
putchar(num);
if (number != 55 || digit != 56)
{
putchar(',');
putchar(' ');}
}
}
}
}
putchar('\n');
return (0);
}
