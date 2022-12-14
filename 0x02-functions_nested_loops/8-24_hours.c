#include "main.h"

/**
 * jack_bauer - printing every minute of the day
 *
 * Return: Always 0.
 */

void jack_bauer(void)

{
	int p;
	int q;

	for (p = 0; p <= 23; p++)
	{
		for (q = 0; q <= 59; q++)
		{
			_putchar (p / 10 + '0');
			_putchar (p % 10 + '0');
			_putchar (':');
			_putchar (q / 10 + '0');
			_putchar (q % 10 + '0');
			_putchar ('\n');
		}
	}
}
