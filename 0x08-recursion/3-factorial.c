#include "main.h"

/**
 * factorial - fuction is to return the factorial of a number
 * @n: the number to return the factorial from
 *
 * Return: Returns the factorial of 'n'
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
