#include "main.h"
/**
 * puts2 - prints first character of a string
 * @str: input
 */

void puts2(char *str)
{
	int long_i = 0;
	int a = 0;
	char *b = str;
	int c;

	while (*b != '\0')
	{
		b++;
		long_i++;
	}
	a = long_i - 1;
	for (c = 0; c <= a; c++)
	{
		if (c % 2 == 0)
		{
			_putchar(str[c]);
		}
	}
	_putchar('\n');
}
