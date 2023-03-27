#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int fade = 0;
	int b = 0;
	char *k = str;
	int h;

	while (*k != '\0')
	{
		k++;
		fade++;
	}
	b = fade - 1;
	for (h = 0 ; h <= b ; h++)
	{
		if (h % 2 == 0)
	{
		_putchar(str[h]);
	}
	}
	_putchar('\n');
}


