#include <stdio.h>
/**
* main - Prints the alphabet.
*
* Return: Always 0 (Success)
*/
int main(void)
{
char letters[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int x;
for (x = 0; x < 52; x++)
{
putchar(letters[x]);
}
putchar('\n');
return (0);
}

