#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *op_add - adds two int
 *
 * @a: int parameter
 *@b: int parameter
 *Return:int
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 *op_sub - Subtraction
 *
 *@a: int parameter
 *@b: int parameter
 *
 *Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 *op_mul - Multiplication of a and b
 *
 *@a: int
 *@b: int
 *
 *Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 *op_div - Division of a and b
 *
 *@a: int
 *@b: int
 *
 *Return: division
 */
int op_div(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 *op_mod - returns reminder after division of a and b
 *
 *@a: int
 *@b: int
 *
 *Return: modulus
 */
int op_mod(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

