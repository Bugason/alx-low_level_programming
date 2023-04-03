#include "main.h"
/**
 * _memcpy - copies memory area
 * @n: bytes to be copied
 * @src: memory area to be copied from
 * @dest: memory area to be copied to
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int i = n;

	for (; a < i; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
