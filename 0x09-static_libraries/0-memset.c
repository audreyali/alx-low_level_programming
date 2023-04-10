#include "main.h"
/**
 * _memset - fill the block of memory with a specific value
 * @s: start address of memory to be filled
 * @b: desired value
 * @n: the number of bytes to be changed
 *
 * Return: the changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int v = 0;


	for (; n > 0; v++)
	{
		s[v] = b;
		n--;
	}
	return (s);
}
