#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates array of integers
 * @min: minimum values
 * @max: maximum values
 *
 * Return: pointer to new array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int a, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);
	for (a = 0; min <= max; a++)
		ptr[a] = min++;
	return (ptr);
}
