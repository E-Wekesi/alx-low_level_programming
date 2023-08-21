#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - program that generates random valid
* passwords for the program 101-crackme
*
* Return: Always 0 (Success)
*/
int main(void)
{
int password[100];
int index, passwordSum, additionalNumber;
passwordSum = 0;
srand(time(NULL));
for (index = 0; index < 100; index++)
{
password[index] = rand() % 78;
passwordSum += (password[index] + '0');
putchar(password[index] + '0');
if ((2772 - passwordSum) - '0' < 78)
{
additionalNumber = 2772 - passwordSum - '0';
passwordSum += additionalNumber;
putchar(additionalNumber + '0');
break;
}
}
return (0);
}
