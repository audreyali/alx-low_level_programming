#include "main.h"

/**
 * char *_strcpy - function copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int r = 0;
	int u = 0;

	while (*(src + r) != '\0')
	{
		r++;
	}
	for ( ; u < r ; u++)
	{
		dest[u] = src[u];
	}
	dest[r] = '\0';
	return (dest);
}

