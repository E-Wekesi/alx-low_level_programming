#include "main.h"
/**
* _strlen - returns the length of a string
* @s: string
* Return: length
*/
int _strlen(char *s)
{
int long_int = 0;
while (*s != '\0')
{
long_int++;
s++;
}
return (long_int);
}
