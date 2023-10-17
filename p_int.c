#include "main.h"

/**
 * print_integer - function to print integers
 * @args: list of arguments
 * Return: Return count of printed characters
 */

int print_integer(va_list args)
{
	int num, digit_place = 1, count = 0;
	unsigned int positive_num;

	num = va_arg(args, int);

	if (num < 0)
	{
		count = count + _putchar('-');
		positive_num = num * -1;
	}
	else
	{
		positive_num = num;
	}
	while (positive_num / digit_place > 9)
		digit_place *= 10;

	while (digit_place != 0)
	{
		count = count + _putchar(positive_num / digit_place + '0');
		positive_num = positive_num % digit_place;
		digit_place = digit_place / 10;
	}

	return (count);
}
