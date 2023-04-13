#include <stdlib.h>
#include "main.h"

/**
 * *_memset - Function fills memory with a constant byte
 * @s: The memory area to be filled
 * @b: char to copy
 * @n: The number of times to copy b
 *
 * Return: Returns pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * *_calloc - The function allocates memory for an array
 * @nmemb: The number of elements in the array
 * @size: The size of each element
 *
 * Return: Returns pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *d;

	if (nmemb == 0 || size == 0)
		return (NULL);

	d = malloc(size * nmemb);

	if (d == NULL)
		return (NULL);

	_memset(d, 0, nmemb * size);

	return (d);
}

