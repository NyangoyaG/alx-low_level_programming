#include <stdio.h>
#include <stdlib.h>
/**
 * main -returns alphabets
 *
 * Return: Always 0 (Success)
 */
int main()
{
	int ch = 'a';

	while (ch <= 'z')

	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
