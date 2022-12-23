#include <stdio.h>
#include "main.h"
/**
 * string_toupper - Function used to changes all lowercase letters of a string to uppercase
 * @word: Pointer to string
 *
 * Return: Pointer to uppercase string
 */
char *string_toupper(char *word)
{
	int lengthOfstring;

	lengthOfstring = 0;

	while (word[lengthOfstring] != '\0')
	{
		if (word[lengthOfstring] >= 97 && word[lengthOfstring] <= 122)
		{
			word[lengthOfstring] = word[lengthOfstring] - 32;
		}
		lengthOfstring++;
	}
	return (word);
}
