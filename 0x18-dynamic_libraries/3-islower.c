#include "main.h"

/**
 * _islower - checks for lowercase character.
 * @c: an integer variable that will accept the character to be checked
 *
 * Return: 1 if c is a lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
