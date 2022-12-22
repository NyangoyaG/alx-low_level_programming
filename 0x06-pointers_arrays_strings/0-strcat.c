#include <stdio.h>
#include "main.h"

/**
 * _strcat - Function used tp concatenate two strings.
 * @dest: string one
 * @src: string two
 * Return: pointer to designated string
 */

char *_strcat(char *dest, char *src)
{
	int lengthcount, i;

	lengthcount = 0;

	while (dest[lengthcount] != '\0')
	{
		lengthcount++;
	}
	for (i = 0; src[i] != '\0'; i++, lengthcount++)
	{
		dest[lengthcount] = src[i];
	}

	dest[lengthcount] = '\0';
	return (dest);
}
