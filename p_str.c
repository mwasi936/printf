#include "main.h"

/**
 * handle_string - Prints a string
 * @args: List of arguments
 *
 * Return: Length of the string (or 6 if it's NULL)
 */

int handle_string(va_list args)
{
	char *str = va_arg(args, char*);
	int i;
	int len = _strlen(str);

	if (str == NULL)
	{
		str = "(null)";

		for (i = 0; i < len; i++)
			_putchar(str[i]);
		return (len);
	}
	else
	{
		for (i = 0; i < len; i++)
			_putchar(str[i]);
		return (len);
	}
}
