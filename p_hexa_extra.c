#include "main.h"

/**
 * print_hexa_extra - Prints an extra hexadecimal number
 * @num: The number to be printed
 *
 * Return: The number of digits printed
 */

int print_hexa_extra(unsigned long int num)
{
	long int i, count = 0;
	long int *arr;
	unsigned long int temp = num;

	while (num / 16 != 0)
	{
		num = num / 16;
		count++;
	}
	count++;
	arr = malloc(sizeof(long int) * count);
	
	for (i = 0; i < count; i++)
	{
		arr[i] = temp % 16;
		temp = temp / 16;
	}
	for (i = count - 1; i >= 0; i--)
	{
		if (arr[i] > 9)
		{
			arr[i] = arr[i] + 39;
		}
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (count);
}
