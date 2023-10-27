#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - searches a string for a set of bytes
 *
 * @s: string to locate
 * @accept: string to search in
 *
 * Return: pointer to the byte s that matches one of the bytes in accept
 * or NULL if not found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
