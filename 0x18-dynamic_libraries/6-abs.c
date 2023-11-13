#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @n: an intiger that will be check for the absolute
 * Return: absolute value of an integer
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-1 * n);
	}
}
