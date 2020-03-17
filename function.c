#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * i_int - fn print integer d_or_i
 *@c : var
 *Return : Always 0
 */
int i_int(va_list c)
{
int v, j, k, i, n, s, n1;
n = va_arg(c, int);
s = 0;
i = 0;
k = 1;
if (n < 0)
{
_putchar('-');
s++;
n = n * (-1);
}
n1 = n;
if(n > 0)
for(;n > 0;i++)
{
n = n / 10;
k = k * 10;
}
for (j = 0; j < i; j++)
{
v = n1 / k;
_putchar(v + '0');
s++;
n1 = n1 % k;
k = k / 10;
}  
return (s);
}


/**
 * c_char - fn
 * @c: var
 * Return: 0
 */
int c_char(va_list c)
{
_putchar(va_arg(c, int));
return (1);
}
/**
 *s_string - fn
 *@c : var
 * Return:0
 */
int s_string(va_list c)
{
char *ch;
int i;
i = 0;
ch = va_arg(c, char*);
if (ch == NULL)
{
ch = "(null)";
}

while (ch[i])
{
_putchar(ch[i]);
i++;
}
return (i);

}
