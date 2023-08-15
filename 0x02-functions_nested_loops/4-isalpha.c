#include "main.h"
/**
* check code _isalpha - checks for alphabetic character
* c is the character to be checked
* Return: 1 if c is a letter otherwise return 0
*/
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
