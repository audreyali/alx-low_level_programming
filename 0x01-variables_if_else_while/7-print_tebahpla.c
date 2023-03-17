#include <stdio.h>
/**
 * main - The function is void
 * Return: whole number
 */
int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
