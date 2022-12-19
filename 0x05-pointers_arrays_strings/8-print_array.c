#include <stdio.h>
#include "main.h"

/**
 * print_array - Function that prints n elements of an array of integers, followed by a new line.
 * @a: Pointer
 * @n: integer variable
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
