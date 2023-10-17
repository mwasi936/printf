#include "main.h"

/**
*handle_string - prints string
*@args: argument in function
*Return: length of string
*/

int handle_string(va_list args)
{
char *str;
int i;
int length;

str = va_arg(args, *char);

if (str == NULL)
{
str = "(null)";
length = strlen(str);

for (i = 0; i < length; i++)
_putchar(str[i]);
return (length);
}

if else
{
length = strlen(str);
for (i = 0; i < length; i++)
_putchar(str[i]);
return (length);
}
}
