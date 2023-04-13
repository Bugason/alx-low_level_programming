#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: input value
 * @s2: inpu value
 * @n: bytes
 *
 * Return: pointer to new space
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int a = 0, b = 0, ln1 = 0, ln2 = 0;

	while (s1 && s1[ln1])
		ln1++;
	while (s2 && s2[ln2])
		ln2++;
	if (n < ln2)
		s = malloc(sizeof(char) * (ln1 + n + 1));
	else
		s = malloc(sizeof(char) * (ln1 + ln2 + 1));
	if (!s)
		return (NULL);
	while (a < ln1)
	{
		s[a] = s1[a];
		a++;
	}
	while (n < ln2 && a < (ln1 + n))
		s[a++] = s2[b++];
	while (n >= ln2 && a < (ln1 + ln2))
		s[a++] = s2[b++];
	s[a] = '\0';
	return (s);
}
