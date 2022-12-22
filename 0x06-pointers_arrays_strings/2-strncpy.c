#include "main.h"

/**
 * _strncpy - Function used to copies a string
 * @dest: Pointer to a character to be changed
 * @src: Pointer to a character that will be changed
 * @n: value
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		i++;
	}

	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
