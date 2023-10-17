#include "main.h"

/**
 * print_x_str - Prints a string of hexadecimal characters.
 * @args: A va_list containing the arguments.
 *
 * Return: The number of characters printed.
 */

int print_x_str(va_list args)
{
	char *str;
	int i, len = 0;
	int value;

	str = va_arg(args, char*);
	if (str == NULL)
	{
		str = "(null)";
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len += 2;
			value = str[i];
			if (value < 16)
			{
				_putchar('0');
				len++;
			}
			len = len + print_HEXA_extra(value);
		}
		else
		{
			_putchar(str[i]);
			len++;
		}
	}
	return (len);
}
