#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @args: Argument list containing the number to be printed.
 *
 * Return: Number of binary digits printed.
 */

int print_binary(va_list args)
{
	int flag = 0;
	int counter = 0;
	int i, x = 1, y;
	unsigned int num = va_arg(args, unsigned int);
	unsigned int p;

	for (i = 0; i < 32; i++)
	{
		p = ((x << (32 - i)) & num);
		if (p >> (31 - i))
		{
			flag = 1;
		}
		if (flag)
		{
			y = p >> (31 - i);
			_putchar(y + 48);
			counter++;
		}
	}
	if (counter == 0)
	{
		counter++;
		_putchar('0');
	}
	return (counter);
}
