#include "main.h"

/**
 * _memset - fills memory with a constant
 * @s: memory area to be filled
 * @b: constant to copy
 * @n: number of times to copy constant
 *
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
