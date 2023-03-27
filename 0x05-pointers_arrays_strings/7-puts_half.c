#include "main.h"
/**
 * puts_half - prints half a string
 * if length of string is odd = (length_of_the_string - 1) / 2
 * @str: input
 */

void puts_half(char *str)
{
	int a, n, long_i;

	long_i = 0;

	for (a = 0; str[a] != '\0'; a++)
		long_i++;

	n = (long_i / 2);

	if ((long_i % 2) == 1)
		n = ((long_i + 1) / 2);

	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
