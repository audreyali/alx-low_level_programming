#include "main.h"
/**
 * main - This function is to print alphabets
 * print_alphabet - The alphabets are in lowercase
 * Return: zero
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

