#include "main.h"
/**
 * _strlen - return string length
 * @s: string being checked
 * Return: length of string
 */

int _strlen(char *s)
{
	int long_i = 0;

	while (*s != '\0')
	{
		long_i++;
		s++;
	}
	return (long_i);
}
