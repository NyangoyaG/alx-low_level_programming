#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: first value 
 * @b: Second
 * int c: swapped value here
 * Return: Always 0 (Success)
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
