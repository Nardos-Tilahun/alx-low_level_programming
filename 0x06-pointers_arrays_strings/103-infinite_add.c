#include "main.h"

/**
 * sum - sum all the operand
 * @n1: first character pointer parameter
 * @n2: second character pointer parameter
 * @r: third character pointer parameter
 * @s: size of r
 * @n1l: first length
 * @n2l: second length
 * Return: pointer character
 */
char *sum(char *n1, char *n2, char *r, int s, int n1l, int n2l)
{
	char rm = 0, *t = r;
	int  cn1, cn2, cr, n, i;

	for (cn1 = n1l - 1, cn2 = n2l - 1, cr = s - 1; cn1 >= 0; cn1--, cn2--, cr--)
	{
		if (cn2 >= 0)
		{
			t[cr] = (n1[cn1] + n2[cn2] + rm);
			if (t[cr] >= 106)
			{
				t[cr] = t[cr] - 58;
				rm = 1;
			}
			else
			{
				t[cr] = 58 - (106 - t[cr]);
				rm = 0;
			}
		}
		if (cn2 < 0 && cn1 >= 0)
		{
			t[cr] = n1[cn1] + rm;
			if (t[cr] >= 58)
			{
				t[cr] = t[cr] - 10;
				rm = 1;
			}
			else
				t[cr] = 58 - (106 - t[cr]);
		}
	}
	if ((rm == 1 && cr == 0) || s == n1l || s == n2l)
		return (0);
	if (rm == 1)
		t[cr--] = rm + 48;
	t[cr] = '\0';
	for (n = 1, i = 0; n < s - cr ; n++, i++)
		r[i] = t[cr + n];
	r[i] = '\0';
	return (r);
}
/**
 * infinite_add - sum all the operand
 * @m1: operand 1
 * @m2: operand 2
 * @r: result stop
 * @s: sum
 * Return: character pointer
 */
char *infinite_add(char *m1, char *m2, char *r, int s)
{
	int a, b;

	for (a = 0; m1[a] != '\0'; a++)
		;
	for (b = 0; m2[b] != '\0'; b++)
		;
	if (a >= b)
	{
		r = sum(m1, m2, r, s, a, b);
	}
	else
	{
		r = sum(m2, m1, r, s, b, a);
	}
	return (r);
}
