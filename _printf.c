#include "holberton.h"
#include <stdlib.h>
#include <stdarg.h> 
   /**
   * _printf - fun printf
   * @format: var format
   * Return: sum of char 
   */
int _printf(const char *format, ...)
{

int s, i;
va_list ap;
 int (*f)(va_list);
va_start(ap, format);
if (format == NULL)
return (-1);
i = 0;
s = 0;
while(format[i])
{    
f = get_op_func(&format[i]);
 s = s + f(ap);
 i = i+ 1;
if(format[i + 1] == '\0')
return (-1);
}
va_end(ap);
return (s);
}
