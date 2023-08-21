#include "main.h"
/**
* char *_strcpy - a function that copies the string pointed to by src
* @dest: copy to
* @src: copy from
* Return: string
*/
char *_strcpy(char *dest, char *src)
{
int copy = 0;
int coppied = 0;
while (*(src + copy) != '\0')
{
copy++;
}
for ( ; coppied < copy ; coppied++)
{
dest[coppied] = src[coppied];
}
dest[copy] = '\0';
return (dest);
}
