#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: input value
 * @s2: input value
 *
 * Return: always 0
 */

char *str_concat(char *s1, char *s2)
{
	char *ct;
	int a, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	a = b = 0;
	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;
	ct = malloc(sizeof(char) * (a + b + 1));
	if (ct == NULL)
		return (NULL);
	a = b = 0;
	while (s1[a] != '\0')
	{
		ct[a] = s1[a];
		a++;
	}
	while (s2[b] != '\0')
	{
		ct[a] = s2[b];
		a++, b++;
	}
	ct[a] = '\0';
	return (ct);
}
