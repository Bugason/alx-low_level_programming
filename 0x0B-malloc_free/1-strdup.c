#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns pointer to newly allocated space
 * @str: char
 *
 * Return: always 0
 */

char *_strdup(char *str)
{
	char *alx;
	int a, b = 0;

	if (str == NULL)
		return (NULL);
	a = 0;

	while (str[a] != '\0')
		a++;

	alx = malloc(sizeof(char) * (a + 1));

	if (alx == NULL)
		return (NULL);

	for (b = 0; str[b]; b++)
		alx[b] = str[b];

	return (alx);
}
