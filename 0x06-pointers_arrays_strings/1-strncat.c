#include <stdio.h>
#include "main.h"

/**
 * _strncat - another Function used to concatenates two strings.
 * @dest:string one
 * @src: string two
 * @n: number of bytes to concatenate
 * Return: pointer to designated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int lengthcount, i;

	length = 0;

	while (dest[lengthcount] != '\0')
	{
		lengthcount++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++, length++)
	{
		dest[length] = src[j];
	}
	dest[lengthcount] = '\0';
	return (dest);
}
