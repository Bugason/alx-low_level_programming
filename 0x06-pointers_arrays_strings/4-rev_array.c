#include "main.h"
/**
 * reverse_array - function that reverses the content of an array
 * @a: array
 * @n: number of elemts in array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int b;
	int c;

	for (b = 0; b < n--; b++)
	{
		c = a[b];
		a[b] = a[n];
		a[n] = c;
	}
}
