#include <stdio.h>
/**
* main - Finds and prints the sum of even-valued terms of the Fibonacci sequence.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int iteration;
unsigned long int term1, term2, nextTerm, evenSum;
term1 = 1;
term2 = 2;
evenSum = 0;
for (iteration = 1; iteration <= 33; ++iteration)
{
if (term1 < 4000000 && (term1 % 2) == 0)
{
evenSum = evenSum + term1;
}
nextTerm = term1 + term2;
term1 = term2;
term2 = nextTerm;
}
printf("%lu\n", evenSum);
return (0);
}
