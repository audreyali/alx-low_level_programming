#include "main.h"
/**
 * _abs - a function that computes the absolute value of an integer
 * @a: parameter to be checked
 * Return: always a
 */
int _abs(int a)
{
	if (a < 0)
	{
		int abs_val;

		abs_val = a * -1;
		return (abs_val);
	}
	return (a);
}
