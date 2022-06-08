#include "main.h"
/**
 *_islower - lower case character
 *
 * @c:The charater
 *
 * Return 1 for lower. 0 for upper
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
