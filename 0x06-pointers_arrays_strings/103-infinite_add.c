#include "main.h"
#include <stdio.h>

/**
 * infinite_add - Adds two numbers
 * @n1: First number as a string
 * @n2: Second number as a string
 * @r: Buffer to store the result
 * @size_r: Size of the buffer
 *
 * Return: Pointer to the result (r)
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1, len2, carry = 0;
    int i, j, k;

    for (len1 = 0; n1[len1] != '\0'; len1++)
        ;
    for (len2 = 0; n2[len2] != '\0'; len2++)
        ;

    if (len1 > size_r || len2 > size_r)
        return 0;

    r[size_r] = '\0';
    i = len1 - 1;
    j = len2 - 1;
    k = size_r - 1;

    while (i >= 0 || j >= 0)
    {
        int digit1 = (i >= 0) ? (n1[i] - '0') : 0;
        int digit2 = (j >= 0) ? (n2[j] - '0') : 0;

        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        r[k] = (sum % 10) + '0';

        i--;
        j--;
        k--;
    }

    if (carry > 0 && k >= 0)
        r[k] = carry + '0';
    else if (carry > 0)
        return (0);

    if (k >= 0)
        return (r + k + 1);
	
    return (r);
}
