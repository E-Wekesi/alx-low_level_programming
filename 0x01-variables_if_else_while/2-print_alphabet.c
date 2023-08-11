#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{char letters[26] = "abcdefghijklmnopqrstuvwxyz";
int a;
for (a = 0; a < 26; a++)
{
putchar(letters[a]);
}
putchar('\n');
return (0);
}
