#include "main.h"
/**
* rev_string - Reverses a string
* @s: Input string
* Return: String in reverse
*/
void rev_string(char *s)
{
char reverse = s[0];
int roll = 0;
int r;
while (s[roll] != '\0')
roll++;
for (r = 0; r < roll; r++)
{
roll--;
reverse = s[i];
s[r] = s[roll];
s[roll] = reverse;
}
}
