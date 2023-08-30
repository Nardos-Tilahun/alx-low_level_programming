#include "main.h"

/**
 * wildcm - concatinate two string
 * @s1: first character pointer parameter
 * @s2: second character pointer parameter
 * @a: integer first
 * @b: integer second
 * Return: integer
 */
int wildcm(char *s1, char *s2, int a, int b)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if ((*s1 == '\0' && *s2 == '*' && *(s2 + 1) == '\0'))
		return (1);
	else if (*s2 != '*' && *(s2 + 1) == '\0' && *(s1 + 1) != *(s2 + 1))
		if (*(s1 + 2) != *(s2 + 2))
			return (wildcm(s1 + 2, s2 - 1, a, b));
		else
			return (0);
	else if (*s1 == '\0' && (*(s1 - 1) != *(s2 - 1)) && *(s2 + 2) == '\0')
		return (0);
	else if (*s1 != *s2)
	{
		if (a != 1 && *(s2 - 1) != '*' && b == 1)
			if (*s2 != '*' && (*(s1 - 1) != *(s2 - 1)))
				return (0);
		if (*s2 == '*')
		{
			b++;
			if (*(s1 + 1) != *(s2 + 1))
				if (*s1 == *(s2 + 1) || *(s2 + 1) == '*')
					return (wildcm(s1, s2 + 1, a, b));
				else
					return (wildcm(s1 + 1, s2, a, b));
			else
				return (wildcm(s1 + 1, s2 + 1, a, b));
		}
		else
			return (wildcm(s1 + 1, s2, a, b));
	}
	else
	{
		a++;
		return (wildcm(s1 + 1, s2 + 1, a, b));
	}
	return (1);
}
/**
 * wildcmp - concatinate two string
 * @s1: first character pointer parameter
 * @s2: second character pointer parameter
 * Return: integer
 */
int wildcmp(char *s1, char *s2)
{
	int a = 1, b = 1;

	return (wildcm(s1, s2, a, b));
}
