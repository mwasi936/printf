#include "main.h"

/**
 * print_HEXA - prints a hexadecimal number in caps
 * @args: arguments list containing the number to print
 *
 * Return: number of digits printed
 */

int print_HEXA(va_list args)
{
	int i, count = 0;
	int *arr;
	unsigned int num =	va_arg(args, unsigned int);
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num = num / 16;
		count++;
	}
	count++;
	arr = malloc(sizeof(int) * count);
	
	for (i = 0; i < count; i++)
	{
		arr[i] = temp % 16;
		temp = temp / 16;
	}
	for (i = count - 1; i >= 0; i--)
	{
		if (arr[i] > 9)
		{
			arr[i] = arr[i] + 7;
		}
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (count);
}
