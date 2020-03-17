#include "holberton.h"
#include <stdio.h>
/**
 * o_oct - fun
 * @c: var
 *
 * Return: 0
 *
 */
int o_oct(va_list c)
{
int n, i, j, s;
int l[1000];
n = va_arg(c, int);
while (n != 0)
{
l[i++] = n % 8;
n  = n / 8;
}
s = 0;
for (j = i - 1; l[j] != '\0'; j--)
{
_putchar(l[j] + '0');
s++;
}
return (s);
}
