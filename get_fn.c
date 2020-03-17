#include "holberton.h"
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
{"%", p_pourc},
{NULL, NULL}
};
i = 0;
while (i <= 2) 
{
if (*(ops[i].op[0]) == *c)
return (ops[i].f);
}
return (NULL);
}
