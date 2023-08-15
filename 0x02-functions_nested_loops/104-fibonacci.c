#include <stdio.h>
/**
* main - Prints the Fibonacci sequence.
*
* Purpose - avoid hardcoding.
*
* Return: Always 0 (Success)
*/
int main(void)
{
unsigned long int index;
unsigned long int before = 1;
unsigned long int after = 2;
unsigned long int billion = 1000000000;
unsigned long int before1;
unsigned long int before2;
unsigned long int after1;
unsigned long int after2;
printf("%lu", before);
for (index = 1; index < 91; index++)
{
printf(", %lu", after);
after += before;
before = after - before;
}
before1 = (before / billion);
before2 = (before % billion);
after1 = (after / billion);
after2 = (after % billion);
for (index = 92; index < 99; ++index)
{
printf(", %lu", after1 + (after2 / billion));
printf("%lu", after2 % billion);
after1 = after1 + before1;
before1 = after1 - before1;
after2 = after2 + before2;
before2 = after2 - before2;
}
printf("\n");
return (0);
}
