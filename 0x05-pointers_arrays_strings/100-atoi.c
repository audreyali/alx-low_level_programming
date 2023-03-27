#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int a, b, c, wid, t, num;

	a = 0;
	b = 0;
	c = 0;
	wid = 0;
	t = 0;
	num = 0;

	while (s[wid] != '\0')
		wid++;

	while (a < wid && t == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			num = s[a] - '0';
			if (b % 2)
				num = -num;
			c = c * 10 + num;
			t = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			t = 0;
		}
		a++;
	}

	if (t == 0)
		return (0);

	return (c);
}


