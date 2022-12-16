#include "main.h"
/**
 * print_diagonal - This function draw diagonal line on the terminal.
 * @n: the int for the paramaters of my function
 * Return: 0
 */
void print_diagonal(int n)
{
	int p = 0;
	int q = 0;

	if (n > 0)
	{
		while (p < n)
		{
			while (p < q)
			{
				_putchar(' ');
				q++;
			}
			p++;
			q = 0;
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
