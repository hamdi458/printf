#ifndef HOLBERTON_H 
#define HOLBERTON_H 
#include <stdarg.h> 
#include <stdlib.h> 
/**
* struct printing - print types. 
* @str:char types. 
* @fn: function.
*
*/
typedef struct op
{
char *op;
int (*f)(va_list p);
} op_t;
int _putchar(char c); 
int c_char(va_list c);
int s_string(va_list c);
int _printf(const char *format, ...);  
int (*get_op_func(const char *format))(va_list);
#endif 
