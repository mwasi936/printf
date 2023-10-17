#include "main.h"

/**
 * print_unsigned_int - prints an unsigned int to stdout
 * @args: unsigned int to be printed
 *
 * Return: number of characters printed
 */

int print_unsigned_int(va_list args)
{
	unsigned int n;
	int exponent = 1;
	int count = 0;

	n = va_arg(args, unsigned int);

	while (n / exponent > 9)
		exponent *= 10;
	while (exponent != 0)
	{
		count = count + _putchar(n / exponent + '0');
		n = n % exponent;
		exponent = exponent / 10;
	}
	return (count);
}
