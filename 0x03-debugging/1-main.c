#include <stdio.h>
/**
* main - causes an infinite loop
* Return: 0
*/
int main(void)
{
int count;
printf("Infinite loop incoming :(\n");
count = 0;
while (count < 10)
{
putchar(count);
}
printf("Infinite loop avoided! \\o/\n");
return (0);
}
