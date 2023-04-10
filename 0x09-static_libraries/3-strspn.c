#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int f = 0;
	int t;


	while (*s)
	{
		for (t = 0; accept[t]; t++)
		{
			if (*s == accept[t])
			{
				f++;
				break;
			}
			else if (accept[t + 1] == '\0')
				return (f);
		}
		s++;
	}
	return (f);
}
