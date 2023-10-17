#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: input string
 * Return: length of a string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}

/**
 * _strlenc - returns the length of a string for constant char
 * @s: input string
 * Return: length of a string
 */

int _strlenc(const char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
