#include "main.h"
#include <stdlib.h>
/**
 * _memset - fills memory with bytes
 * @b: memory area being filled
 * @c: char
 * @n: amount of times to copy
 *
 * Return: pointer to b
 */

char *_memset(char *b, char c, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		b[a] = c;
	}
	return (b);
}

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in array
 * @size: size of element
 *
 *Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
