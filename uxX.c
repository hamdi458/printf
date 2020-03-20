#include <stdio.h>
#include "holberton.h"

/**
 * u_uu - fun unsigned int
 * @c: va_list var
 * Return: 0
 */
int u_uu(va_list c)
{
unsigned int n, k;
unsigned int s, n1;
s = 0;
n1 = 1;
n = va_arg(c, unsigned int);
k = n;
while ((k / 10) != 0)
{
k /= 10;
n *= 10;
}
while (n1 >= 1)
{
_putchar((n / n1) +'0');
n %= n1;
n1 /= 10;
s++;
}
return (s);
}
