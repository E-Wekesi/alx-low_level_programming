#include "main.h"
/**
* _atoi - converts a string to an integer
* @str: string to be converted
*
* Return: the int converted from the string
*/
int _atoi(char *str)
{
int index = 0;
int negativeCount = 0;
int result = 0;
int strLength = 0;
int foundDigit = 0;
int currentDigit = 0;
while (str[strLength] != '\0')
strLength++;
while (index < strLength && foundDigit == 0)
{
if (str[index] == '-')
++negativeCount;
if (str[index] >= '0' && str[index] <= '9')
{
currentDigit = str[index] - '0';
if (negativeCount % 2)
currentDigit = -currentDigit;
result = result * 10 + currentDigit;
foundDigit = 1;
if (str[index + 1] < '0' || str[index + 1] > '9')
break;
foundDigit = 0;
}
index++;
}
if (foundDigit == 0)
return (0);
return (result);
}
