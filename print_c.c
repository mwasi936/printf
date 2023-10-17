#include "main.h"

/**
*handle_char - prints character
*@args: argument in function
*Return: 1
*/


int handle_char(va_list args)
{
char str;

str = va_arg(va_list, int);
_putchar(str)
return (1);
}
