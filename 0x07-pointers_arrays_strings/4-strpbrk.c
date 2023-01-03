#include "main.h"
#define NULL 0

/**
* _strpbrk - return pointer to byte in s that matches a byte in accept
* @s: search string
* @accept: target
* Return: pointer to index of string at first occurence
*/

char *_strpbrk(char *s, char *accept)
{
	int m = 0, n;

	while (s[m] != '\0')
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[m] == accept[n])
			{
				s = &s[m];
				return (s);
			}

		}

	m++;
	}

	return (NULL);

}
