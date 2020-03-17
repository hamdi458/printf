#include "holberton.h"
#include <stdlib.h>
/**
 * R_rot - fun
 * @c: var
 *
 * Return:0
 */
int R_rot(va_list c)
{
char ch[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char chs[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
unsigned int i = 0, j = 0;
int s;
char *str;
s = 0;
str = va_arg(c, char *);
if (str == NULL)
str = "(ahyy)";
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; ch[j] != '\0'; j++)
{
if (ch[j] == str[i])
{
_putchar(chs[j]);
s++;
break;
}
}
if (ch[j] == '\0')
{
_putchar(str[i]);
s++;
}
}
return (s);
}
