#include "main.h"

/**
 * _printf - Custom printf function
 * @format: Format string containing format specifiers
 *
 * Return: Number of characters printed (excluding null byte)
 */

int _printf(const char *format, ...)
{
	match m[] = {
		{"%c", handle_char}, {"%s", handle_string}, {"%%", handle_percent},
		{"%d", print_integer}, {"%i", print_decimal}, {"%b", print_binary},
		{"%u", print_unsigned_int}, {"%o", print_octal}, {"%x", print_hexa},
		{"%X", print_HEXA}, {"%S", print_x_str}, {"%p",  print_pointer},
		{"%r", print_reverse}
	};

	va_list args;
	int i = 0, len = 0;
	int v = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}

	while (format[i] != '\0')
	{
		v = 12;
		while (v >= 0)
		{
			if (m[v].identifier[0] == format[i] && m[v].identifier[1] == format[i + 1])
			{
				len = len + m[v].fucttion(args);
				i += 2;
			}
			v--;
		}
		_putchar(format[i]);
		i++;
		len++;
	}
	va_end(args);
	return (len);
}
