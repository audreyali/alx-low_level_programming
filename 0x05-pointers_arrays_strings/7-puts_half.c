#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int m, n, fade;

	fade = 0;

	for (m = 0; str[m] != '\0'; m++)
		fade++;

	n = (fade / 2);

	if ((fade % 2) == 1)
		n = ((fade + 1) / 2);

	for (m = n; str[m] != '\0'; m++)
		_putchar(str[m]);
	_putchar('\n');
}

