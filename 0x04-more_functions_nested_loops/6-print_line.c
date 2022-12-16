#include "main.h"
/**
 * print_line - function that checking for uppercase character.
 * @n: integer
 * Return: 0
 */
void print_line(int n)
{
	int y = 0;

	if (n > 0)
	{
		while (y <= n)
		{
			_putchar('_');
			y++;
		}
	 _putchar('\n');
	}
	else
	_putchar('\n');
}
