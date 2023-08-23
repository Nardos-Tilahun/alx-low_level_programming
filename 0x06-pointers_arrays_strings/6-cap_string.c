#include "main.h"

/**
 * cap_string - concatinate two string
 * @s: second character pointer parameter
 * Return: pointer character
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		switch (s[i])
		case ' ':
		case '\n':
		case '\t':
		case ',':
		case ';':
		case '.':
		case '!':
		case '?':
		case '"':
		case '(':
		case ')':
		case '{':
		case '}':
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
				s[i + 1] -= 32;
	}
	s[i] ='\0';
	return (s);
}
