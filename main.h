#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

typedef struct conversion
{
        char *operators;
        int (*func)(va_list);
} conversion;

int _putchar(char c);
int _printf(const char *format, ...);
int format_handler(const char *format, conversion funcs_list[], va_list args);
int print_int(va_list args);
/*int printf_c_s_prcnt(const char *format, ...);*/
int print_char(va_list args);
int print_str(va_list args);
int print_percent(__attribute__((unused))va_list args);
int _strlen(const char *str);

#endif
