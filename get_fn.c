#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * get_op_func - fun int
 * @c: var op
 * Return: 0
 */
int (*get_op_func(const char *c))(va_list ap)
{
int k;
op_t ops[] = {
{"c", c_char},
{"s", s_string},
{"i", i_int},
{"d", i_int},
{"b", b_bin},
{NULL, NULL}
};
k = 0;
while (k <= 5)
{
if (*c == *(ops + k)->op)
return ((ops + k)->f);
k++;
}
return (NULL);
}
