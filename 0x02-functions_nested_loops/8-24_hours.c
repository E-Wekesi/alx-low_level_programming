#include "main.h"
/**
* jack_bauer - prints every minute of the day of Jack Bauer
* starting from 00:00 to 23:59
*/
void jack_bauer(void)
{
int count, counter;
count = 0;
while (count < 24)
{
counter = 0;
while (counter < 60)
{
_putchar((count / 10) + '0');
_putchar((count % 10) + '0');
_putchar(':');
_putchar((counter / 10) + '0');
_putchar((counter % 10) + '0');
_putchar('\n');
counter++;
}
count++;
}
}
