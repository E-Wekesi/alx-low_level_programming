#include "main.h"
/**
* check code _islower - check if char is lowercase
* c: is the character to be examined
* Return: 1 if char is lowercase, else 0.
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
