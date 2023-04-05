#include "main.h"
/**
 * _strlen_recursion - prints length of a string
 * @s: string
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int long_i = 0;

	if (*s)
	{
		long_i++;
		long_i += _strlen_recursion(s + 1);
	}
	return (long_i);
}
