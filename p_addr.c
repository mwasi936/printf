#include "main.h"

/**
 * print_pointer - prints a pointer address
 * @args: argument list
 *
 * Return: number of characters printed
 */

int print_pointer(va_list args)
{
	void *ptr;
	char *s = "(nil)";
	long int a;
	int i, b;

	ptr = va_arg(args, void*);
	if (ptr == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
		}
		return (i);
	}
	a = (unsigned long int)ptr;
	_putchar('0');
	_putchar('x');
	b = print_hexa_extra(a);
	return (b + 2);
}
