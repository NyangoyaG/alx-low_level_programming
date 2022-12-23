#include <stdio.h>
#include "main.h"
/**
 * reverse_array - Reversing  an array
 * @a: Pointer
 * @n: Pointer of elements of an array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int temp, counter;

	n = n - 1;
	counter = 0;
	while (counter <= n)
	{
		temp = a[counter];
		a[counter++] = a[n];
		a[n--] = temp;
	}
}
