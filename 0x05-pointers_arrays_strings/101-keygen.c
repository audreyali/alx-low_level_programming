#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pass[100];
	int j, add, b;

	add = 0;

	srand(time(NULL));

	for (j = 0; j < 100; j++)
	{
		pass[j] = rand() % 78;
		add += (pass[j] + '0');
		putchar(pass[j] + '0');
		if ((2772 - add) - '0' < 78)
		{
			b = 2772 - add - '0';
			add += b;
			putchar(b + '0');
			break;
		}
	}

	return (0);
}

