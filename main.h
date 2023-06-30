#ifndef MAIN_H_
#define MAIN_H_
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>
#include <stdarg.h>

/**
  * struct format - foramt and pointer to its function
  * @s: element
  * @select_format: element
  */

typedef struct format
{
char *s;
int (*select_format)();
} fmt;

int _printf(const char *format, ...);
int _putchar(char c);
int printchar(va_list x);
int printstr(va_list x);
int printdeci(va_list x);
int printint(va_list x);
int printBinary(va_list x);
char *copyString(char *dest, char *src);
int revString(va_list x);
int printUnSigned(va_list x);
int printHexaLowered(va_list x);
int printHexaUppered(va_list x);
int printOctal(va_list x);

#endif
