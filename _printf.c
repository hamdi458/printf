#include "holberton.h"
#include <stdio.h>
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


va_start(ap, format);
if (format == NULL)
return (-1);
i = 0;
while(format[i])
{
  if (get_op_func(format[i])
    {    
  s += get_op_func(ap)
i+=2
    }
    else
      if(format[i + 1] == '\0')
	return (-1);
 
}
va_end(ap);
return i;
}
