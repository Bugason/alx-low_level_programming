#include <stdio.h>
/**
 * main - entry point
 * print both uppercase and lowercase
 *
 * Return: always 0
 */
int main(void)
{
	int n = 97;
	int m = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (m <= 98)
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
