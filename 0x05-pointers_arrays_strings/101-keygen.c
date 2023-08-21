#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
	int pas[100];
	int i, s, n;

	s = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		pas[i] = rand() % 78;
		s += (pas[i] + '0');
		putchar(pas[i] + '0');
		if ((5000 - s) - '0' < 78)
		{
			n = 2772 - s - '0';
			s += n;
			putchar(n + '0');
			break;
		}
	}
	return (0);
}
