#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

typedef struct format
{
	char *identifier;
	int (*fucttion)();
} match;

int _printf(const char *format, ...);
int _putchar(char c);
int _strlen(char *s);
int _strlenc(const char *s);
int handle_char(va_list args);
int handle_string(va_list args);
int handle_percent(void);
int print_integer(va_list args);
int print_decimal(va_list args);
int print_binary(va_list args);
int print_unsigned_int(va_list args);
int print_octal(va_list args);
int print_hexa(va_list args);
int print_HEXA(va_list args);
int print_HEXA_extra(unsigned int number);
int print_x_str(va_list args);
int print_hexa_extra(unsigned long int num);
int print_pointer(va_list args);
int print_reverse(va_list args);

#endif
