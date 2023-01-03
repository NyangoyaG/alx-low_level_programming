#include <stdio.h>
#include "main.h"
/**
* char *_memcpy - copy n bytes from memory area src to memory area dest
* @dest: destination
* @src: source
* @n: number of bytes
* Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{

	int size = n;

	if (size > 0)
	{
		int index;

		for (index = 0; index < size; index++)
		dest[index] = src[index];
	}

	return (dest);
}
