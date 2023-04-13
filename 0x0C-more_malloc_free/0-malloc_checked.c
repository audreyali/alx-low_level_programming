#include <stdlib.h>
#include "main.h"

/**
* *malloc_checked - Function allocates memory with  malloc
* @b: number of bytes to be allocated
* Return:returns a pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
	void *d;

	d = malloc(b);

	if (d == NULL)
	exit(98);

	return (d);
}
