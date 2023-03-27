#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int fade = 0;
	int o;

	while (*s != '\0')
	{
		fade++;
		s++;
	}
	s--;
	for (o = fade; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}


