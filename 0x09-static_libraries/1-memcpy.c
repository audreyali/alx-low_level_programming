#include "main.h"
/**
 *_memcpy - This function copies memory area
 *@dest: memory where is stored
 *@src: memory where is copied
 *@n: The number of bytes
 *
 *Return: Return copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int d = 0;
	int t = n;


	for (; d < t; d++)
	{
		dest[d] = src[d];
		n--;
	}
	return (dest);
}
