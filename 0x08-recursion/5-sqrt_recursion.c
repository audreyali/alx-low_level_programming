#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - Function returns the natural square root of a number
 * @n: value to calculate the square root of a number
 *
 * Return: the calculated square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - Function recurses to find
 * the natural square root of a number
 * @n: value to calculate the sqaure root of a number
 * @i: iterator
 *
 * Return: the calculated square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}

