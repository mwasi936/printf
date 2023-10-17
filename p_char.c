#include "main.h"

/**
 * handle_char - Prints a character
 * @args: List of arguments
 *
 * Return: Number of characters printed (always 1)
 */

int handle_char(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
	return (1);
}
