#include <stdio.h>
/**
* main - Prints the first 50 Fibonacci numbers separated by commas and spaces.
*
* Return: Always 0.
*/
int main(void)
{
int iteration;
unsigned long previousTerm1 = 0, previousTerm2 = 1, currentTerm;
for (iteration = 0; iteration < 50; iteration++)
{
currentTerm = previousTerm1 + previousTerm2;
printf("%lu", currentTerm);
previousTerm1 = previousTerm2;
previousTerm2 = currentTerm;
if (iteration != 49)
printf(", ");
else
printf("\n");
}
return (0);
}
