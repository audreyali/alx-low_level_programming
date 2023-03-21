#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 *
 * @i: function parameter
 *
 * Return: b
 */
int print_last_digit(int i)
{
	int b;

	b = i % 10;
	if (i < 0)
		b = -b;
	return (b);
}
