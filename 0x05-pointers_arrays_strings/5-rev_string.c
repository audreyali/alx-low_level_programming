#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char reverse = s[0];
	int counter = 0;
	int t;

	while (s[counter] != '\0')
	counter++;
	for (t = 0; t < counter; t++)
	{
		counter--;
		reverse = s[t];
		s[t] = s[counter];
		s[counter] = reverse;
	}
}

