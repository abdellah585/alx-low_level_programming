#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: string to evaluate
 * @accept: string with characters to match in s
 *
 * Return: number of segments in the initial segment of s
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, f, a;

	f = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		a = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				f++;
				a = 1;
			}
		}
		if (a == 0)
		{
			return (f);
		}
	}
	return (0);
}
