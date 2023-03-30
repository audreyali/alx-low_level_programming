#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int k, y, t;

	k = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (k < size)
	{
		y = size - k < 10 ? size - k : 10;
		printf("%08x: ", k);
		for (t = 0; t < 10; t++)
		{
			if (t < y)
				printf("%02x", *(b + k + t));
			else
				printf("  ");
			if (t % 2)
			{
				printf(" ");
			}
		}
		for (t = 0; t < y; t++)
		{
			int c = *(b + k + t);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		k += 10;
	}
}



