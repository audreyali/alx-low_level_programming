#include <stdlib.h>
#include "main.h"

/**
 * *array_range - Function creates an array of integers
 * @min: The minimum range of values stored
 * @max: The maximum range of values stored and number of elements
 *
 * Return: Returns pointer to the new array
 */
int *array_range(int min, int max)
{
	int *d;
	int c, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	d = malloc(sizeof(int) * size);

	if (d == NULL)
		return (NULL);

	for (c = 0; min <= max; c++)
		d[c] = min++;

	return (d);
}
