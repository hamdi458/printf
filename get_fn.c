#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
 /**
  * get_op_func - fun int
  * @s: var op
  * Return: 0
  */
int (*get_op_func(const char *c))(va_list ap)
{
int i;
op_t ops[] = {
{"c", c_char},
{"s", s_string},
{NULL, NULL}
};
i = 0;
while (i <= 2) 
{
if (*c == *(ops + i)->op) 
return ((ops + i)->f); 
i++;
}
return (NULL);
}
