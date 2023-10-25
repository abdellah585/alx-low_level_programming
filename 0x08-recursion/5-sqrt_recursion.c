#include "main.h"

int _sqrt_calc(int n, int i);

/**
 * _sqrt_recursion - return naturel square root of a given number
 *
 * @n: number to evaluate
 *
 * Return: result of square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_calc(n, 0));
}

/**
 * _sqrt_calc - find the natural square root
 *
 * @n: number to find the square root of
 * @i: iterator
 *
 * Return: result of square root
 */

int _sqrt_calc(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt_calc(n, i + 1));
}
