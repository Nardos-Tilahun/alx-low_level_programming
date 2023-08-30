#include "main.h"

/**
 * _palindrome - is_palindrome
 * @s: first character pointer
 * Return: integer
 */
int _palindrome(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _palindrome(s + 1));
}

/**
 * palindrome - is_palindrome
 * @s: first character pointer
 * @n: integer first
 * @m: integer second
 * Return: integer
 */
int palindrome(char *s, int n, int m)
{
	if (m > n / 2)
		return (1);
	if (s[n - m] != s[m - 1])
		return (0);
	return (palindrome(s, n, ++m));
}


/**
 * is_palindrome - is_palindrome
 * @s: first character pointer
 * Return: integer
 */
int is_palindrome(char *s)
{
	int n = _palindrome(s);

	return (palindrome(s, n, 0));
}
