#include "holberton.h"
#include <stdio.h>
/**
 * b_bin - fun
 * @b: c
 * Return: binary
 */
int b_bin(va_list c)
{
unsigned int n, m, i, j;
unsigned int s = 0, l[32], tot = 0;
n = va_arg(c, unsigned int);
m = 2147483648;
l[0] = n / m;
for (i = 1; i < 32; i++)
{
m /= 2;
l[i] = (n / m) % 2;
}
for (j = 0; j < 32; j++)
{
tot += l[j];
if (tot || j == 31)
{
_putchar(l[j] + '0');
s++;
}
}
return (s);
}
