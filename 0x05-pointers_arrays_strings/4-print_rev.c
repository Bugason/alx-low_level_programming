#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string to be printed
 */

void print_rev(char *s)
{
	int long_i = 0;
	int a;

	while (*s != '\0')
	{
		long_i++;
		s++;
	}
	s--;
	for (a = long_i; a > 0; a--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
