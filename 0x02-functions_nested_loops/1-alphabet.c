#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - main function
 * i
 * Return 0
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);

	_putchar('\n');
}
