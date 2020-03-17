#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * b_bin - fun
 * @c: c
 * Return: binary
 */
int b_bin(va_list c)
{
int i, j, n, r, l[32];
int s = 0;
i = 0;
n = va_arg(c, unsigned int);
do
{
r = n % 2;
l[i] = r;
n = (n - r) / 2;
i++;
}while (n != 0);

j = i - 1;
while (j >= 0)
{
_putchar(l[j] + '0');
s++;
j--;
}
return (s);
}
