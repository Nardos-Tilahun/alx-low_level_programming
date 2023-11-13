#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - Writes a character to stdout
 * @c: The character to be written
 *
 * Return: The character written
 */
int _putchar(char c) /* _putchar used to return c*/
{
	return (write(1, &c, 1));
}
