#include "main.h"

/**
 * _strlen - counts the length of a string
 *
 * @s : pointer to a string
 *
 * Return : length of the string
 */

int _strlen(char *s)
{
	int length, i = 0;

	while (*(s+i) != '/0')
	{

		length++;
		i++;
	}
	return (length);
}
