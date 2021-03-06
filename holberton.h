#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdlib.h>
/**
* struct op - print types.
* @op:char
* @f: fun
*
*/
typedef struct op
{
char *op;
int (*f)(va_list p);
} op_t;
void print_number(int n);
int _putchar(char c);
int R_rot(va_list c);
int b_bin(va_list c);
int r_rev(va_list c);
int c_char(va_list c);
int s_string(va_list c);
int _printf(const char *format, ...);
int o_oct(va_list c);
int u_uu(va_list c);
int (*get_op_func(const char *format))(va_list);
int i_int(va_list c);
#endif
