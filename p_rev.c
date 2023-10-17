#include "main.h"

/**
 * print_reverse - Prints a string in reverse
 * @args: List of arguments
 * Return: Number of characters printed
 */

int print_reverse(va_list args)
{
	char *str = va_arg(args, char*);
	int i;
	int c = 0;

	if (str == NULL)
	{
		str = "(null)";
	}
	while (str[c] != '\0')
	{
		c++;
	}
	for (i = c - 1; i >= 0; i--)
	{
		_putchar(str[i]);
	}
	return (c);
}
