#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * get_op_func - fun int
 * @c: var op
 * Return: zero
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
		{"r", r_rev},
		{"R", R_rot},
		{"o", o_oct},
		{"u", u_uns},
		{"x", x_xx},
		{"X", X_XX},
		{NULL, NULL}
	};
	k = 0;
	while (k <= 7)
	{
		if (*c == *(ops + k)->op)
			return ((ops + k)->f);
		k++;
	}
	return (NULL);
}
