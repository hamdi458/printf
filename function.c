#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
   * c_char - fn
   * @args: var
   * Return: 0
   */
int c_char(va_list c)
{
_putchar(va_arg(c, int);
return (1);
}
/**
 *s_string - fn
 *@s : var
 *Return :0
 */
int s_string(va_list c)
{
char *ch;
int i;
ch = va_arg(c, char*);
for (i = 0; ch[i] != '\0'; i++)
_putchar(ch[i]);
return(i);
}
