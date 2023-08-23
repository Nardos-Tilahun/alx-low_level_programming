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
		{
		case 32:
		case 10:
		case 9:
		case 44:
		case 59:
		case 46:
		case 33:
		case 63:
		case 34:
		case 40:
		case 41:
		case 123:
		case 125:
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
				s[i + 1] -= 32;
		}
		if (i == 0)
			if (s[i] >= 97 && s[i] <= 122)
				s[i] -= 32;
	}
	return (s);
}
