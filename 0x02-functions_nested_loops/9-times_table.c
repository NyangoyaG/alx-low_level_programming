#include "main.h"
/**
 * times_table - printing the 9 times table
 * Return: 0 (Always Success)
 */
void times_table(void)
{
	int number, mult, c;

	for (number = 0; number <= 9; number++)
	{
		for (mult = 0; mult <= 9; mult++)
		{
			c = number * mult;
			if ((c / 10) == 0)
			{
				if (mult == 0)
				{
					_putchar('0');
				}

				if (mult != 0)
				{
					_putchar(' ');
					_putchar((c % 10) + '0');
				}
				if (mult < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
				if (mult < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}

		_putchar('\n');
	}
}
