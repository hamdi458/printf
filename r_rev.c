#include "holberton.h"
#include <stdio.h>
/**
 * r_rev - fun
 * @r: var
 * Return: 0
 */
int r_rev(va_list c)
{
char *ch;
int i = 0, j, s,x;
s = 0;
x = 0;
ch = va_arg(c, char *);
if (ch == NULL)
ch = ")llun(";
for (i = 0; ch[i] != '\0'; i++)
x++;
for (j = x - 1; j >= 0; j--)
{
_putchar(ch[j]);
s++;
}
return (s);
}
