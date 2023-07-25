#ifndef MY_HEADER_PRINTF
#define MY_HEADER_PRINTF
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
int _printf(const char *format, ...);
int _putchar(char c);
void char_handler(va_list arg, int *counter);
void string_handler(va_list arg, int *counter);
void decimal_handler(va_list arg, int *counter);
void (*fun)(va_list arg, int *counter);
#endif
