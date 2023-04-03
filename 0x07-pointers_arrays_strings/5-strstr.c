#include "main.h"
/**
 * _strstr - entry point
 * @haystack: Input
 * @needle: Input
 * Return: Always 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *e = haystack;
		char *d = needle;

		while (*e == *d && *d != '\0')
		{
			e++;
			d++;
		}

		if (*d == '\0')
			return (haystack);
	}

	return (0);
}



