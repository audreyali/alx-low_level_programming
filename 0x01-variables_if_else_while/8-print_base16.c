#include <stdio.h>
/**
 * main - This is void
 * Return: whole number
 */
int main(void)
{
	int i;
	char q;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (q = 'a' ; q <= 'f' ; q++)
		putchar(q);
	putchar('\n');
	return (0);
}
