#ifndef MAIN_H_
#define MAIN_H_
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>
#include <stdarg.h>

/**
  * struct format - foramt and pointer to its function
  * @flag: element
  * @print_with_format: element
  */

typedef struct format
{
	char *flag;
	int (*print_with_format)();
} fmt;

int _printf(const char *format, ...);
int _putchar(char c);
int printf_char(va_list val);
int printf_string(va_list val);
int printf_dec(va_list val);
int printf_int(va_list val);

#endif
