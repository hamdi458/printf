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
  _putchar(va_arg(c,int));
  return(0);
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
