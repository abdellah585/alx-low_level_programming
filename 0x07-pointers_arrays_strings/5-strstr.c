#include "main.h"

/**
 * *_strstr - locates first occurence of a substring in a string
 *
 * @haystack: string to search in
 * @needle: string to locate
 *
 * Return: pointer to the beginning of the located substring or NULL if
 * not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return (NULL);
}
