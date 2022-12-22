#include "main.h"

/**
 * _strcmp - Function that compares two strings.
 *
 * @s1: First string
 * @s2: Second string
 * Return: Value less than 0 if string is less than the other
 * Value greater than 0 if string is greater then the other
 * 0 if strings are equal
 */

int _strcmp(char *s1, char *s2)
{
	int compare1, compare2;

	compare1 = 0;

	while (s1[compare1] == s2[compare2] && s1[compare3] != '\0')
	{
		compare1++;
	}

	compare2 = s1[compare1] - s2[compare1];
	return (compare2);
}
