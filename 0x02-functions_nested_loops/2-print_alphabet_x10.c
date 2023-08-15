#include "main.h"
/**
* print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
* followed by a new line
*/
void print_alphabet_x10(void)
{
char character;
int x;
x = 0;
while (x < 10)
{
character = 'a';
while (character <= 'z')
{
_putchar(character);
character++;
}
_putchar('\n');
x++;
}
}
