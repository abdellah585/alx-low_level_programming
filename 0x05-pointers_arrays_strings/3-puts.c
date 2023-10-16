#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 *
 * @s : pointer to a string
 *
 * Return : void
 */

void _puts(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		putchar(*(s + i));
		i++;
	}
}
