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
		if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		{
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
                                s[i + 1] -= 32;
		}
		else if (s[i] == ',' || s[i] == ';' || s[i] == '.')
		{
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
                                s[i + 1] -= 32;

		}
		else if (s[i] == '!' || s[i] == '?' || s[i] == 34)
		{
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
                                s[i + 1] -= 32;
		}
		else if (s[i] == 40 || s[i] == 41 || s[i] == 123 || s[i] == 125)
		{
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
                                s[i + 1] -= 32;
		}	/*switch (s[i])
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
				s[i + 1] -= 32;*/
	}
	s[i] ='\0';
	return (s);
}
