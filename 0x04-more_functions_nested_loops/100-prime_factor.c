#include <stdio.h>
#include <math.h>
/**
* main - Finds and prints the largest prime factor of the number 612852475143,
* followed by a new line.
* Return: Always 0 (Success)
*/
int main(void)
{
long int number = 612852475143;
long int largestPrime = -1;
long int divisor;
while (number % 2 == 0)
{
largestPrime = 2;
number /= 2;
}
for (divisor = 3; divisor <= sqrt(number); divisor += 2)
{
while (number % divisor == 0)
{
largestPrime = divisor;
number /= divisor;
}
}
if (number > 2)
largestPrime = number;
printf("%ld\n", largestPrime);
return (0);
}
