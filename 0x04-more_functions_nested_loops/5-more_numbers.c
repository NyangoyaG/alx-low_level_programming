#include "main.h"
/**
 * more_numbers - function for uppercase character
 * Return: 0
 */
void more_numbers(void)
{

	int p = 0;
	int q = 0;

	while (q <= 9)
	{
		while (p <= 14)
		{
			if (p > 9)
				_putchar(p/ 10 + '0');
			_putchar(p % 10 + '0');
			p++;

		}
	_putchar('\n');
	q++;
	p = 0;
	}
}
