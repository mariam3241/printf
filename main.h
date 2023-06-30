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
int printrot13(va_list x);
int printLongInt(va_list x);
int printLongUnsigned(va_list x);
int printLongUpperedHexa(va_list x);
int printLongLoweredHexa(va_list x);
int printLongDecimal(va_list x);
int printLongOctal(va_list x);
int printShortInt(va_list x);
int printShortUnsigned(va_list x);
int printShortUpperedHexa(va_list x);
int printShortLoweredHexa(va_list x);
int printShortDecimal(va_list x);
int printShortOctal(va_list x);

#endif
