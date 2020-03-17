#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * c_char - fn
 * @c: var
 * Return: 0
 */
int c_char(va_list c)
{
char ch;
ch = va_arg(c, int);
 _putchar(ch);
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
while(ch[i])
{
_putchar(ch[i]);
i++;
}
return (i);

}
