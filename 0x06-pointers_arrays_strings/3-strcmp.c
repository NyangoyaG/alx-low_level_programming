#include <stdio.h>
#include "main.h"

/**
 * _strcmp - This function used to compares two strings.
 *
 * @s1: string1
 * @s2: string2
 * Return: Value less than 0 if string is less than the other
 * Value greater than 0 if string is greater then the other
 * 0 if strings are equal
 */

int _strcmp(char *s1, char *s2)
{
	int counter;
	int comVal;

	counter = 0;

	while (s1[counter] == s2[counter] && s1[counter] != '\0')
	{
		counter++;
	}

	comVal = s1[counter] - s2[counter];
	return (comVal);
}
