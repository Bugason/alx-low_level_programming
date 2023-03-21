#include "main.h"
/**
 * _isalpha - checks whether a character is an alphabet or not
 *@c: parameter to be checked
 *
 * Return: 1 is character passed is an alphabet
 * and 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
