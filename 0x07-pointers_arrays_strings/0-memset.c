#include "main.h"
#include <stdio.h>

/**
 *_memset - prints buffer in hexa
 * @s: A pointer to the memory area to be filled.
 * @b: The character to fill the memory area with.
 * @n: The number of bytes to be filled.
 * * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		*(s + index) = b;
	return (s);
}
