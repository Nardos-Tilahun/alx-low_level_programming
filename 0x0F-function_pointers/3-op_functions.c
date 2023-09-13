#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - function that add two integer
 * @a: the first integer
 * @b: the second integer
 * Return: sum of the two integer
 */
int op_add(int a, int b)
{
	int c;

	c = a + b;
	return (c);
}
/**
 * op_sub - function that substract two integer
 * @a: the first integer
 * @b: the second integer
 * Return: difference of the two integer
 */

int op_sub(int a, int b)
{
	int c;

	c = a  - b;
	return (c);
}

/**
 * op_mul - function that multiply two integer
 * @a: the first integer
 * @b: the second integer
 * Return: product of the two integer
 */

int op_mul(int a, int b)
{
	int c;

	c = a * b;
	return (c);
}

/**
 * op_div - function that divided two integer
 * @a: the first integer
 * @b: the second integer
 * Return: division of the two integer
 */

int op_div(int a, int b)
{
	int c;

	c = a / b;
	return (c);
}

/**
 * op_mod - function that modulus two integer
 * @a: the first integer
 * @b: the second integer
 * Return: modulus of the two integer
 */
int op_mod(int a, int b)
{
	int c;

	c = a % b;
	return (c);
}
