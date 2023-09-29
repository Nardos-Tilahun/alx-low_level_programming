#include "main.h"

/**
 * get_endianness - check the code
 * Return: Always integer sum.
 */
int get_endianness()
{
	unsigned int i = 10;
	char *check = (char *)&i;

	if (*check != 10)
		return (0);
	else
		return (1);
}
