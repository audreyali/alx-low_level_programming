#include "main.h"
/**
 * print_chessboard - entry point
 * @a: Array
 * Return: Always 0
 */
void print_chessboard(char (*a)[8])
{
	int f;
	int b;

	for (f = 0; f < 8; f++)
	{
		for (b = 0; b < 8; b++)
			_putchar(a[f][b]);
		_putchar('\n');
	}
}

