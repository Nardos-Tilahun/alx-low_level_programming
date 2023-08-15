#include "main.h"

/**
 * _isalpha - Writes a character to stdout
 * @c: The character to be written
 *
 * Return: 1 if c is a letter, lowercase or uppercase
 * Return: 0 otherwise
 */
int _isalpha(int c)
{
	char a = putchar(c);
	
	if ((a >= 65 && a<= 'Z') || (a >= 'a' && a<='z'){
			return (1);
			}
			else {
			return (0);
			}
}
