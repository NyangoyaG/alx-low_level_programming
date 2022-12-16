#include <stdio.h>
/**
 * main - function Checking for uppercase character.
 * Return: 0
 */
int main(void)
{
	int p = 1;

	while (p <= 100)
	{
		if (p % 3 == 0 && p % 5 == 0)
			printf("FizzBuzz ");
		else if (p % 5 == 0)
		{
			if (p == 100)
			{
				printf("Buzz");
				printf("\n");
			}
			else
				printf("Buzz ");
		}
		else if (p % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", p);
	p++;
	}
return (0);
}
