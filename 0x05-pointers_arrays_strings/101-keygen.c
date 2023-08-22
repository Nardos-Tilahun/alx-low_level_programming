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
	int pas[92];
	int i, s, n;

	s = 0;

	srand(time(NULL));

	for (i = 0; i < 92; i++)
	{
		pas[i] = rand() % 92;
		s += (pas[i] + 33);
		putchar(pas[i] + 33);
		if ((4600  - s) - 33 < 92)
		{
			n = 4600 - s - 33;
			s += n;
			putchar(n + 33);
			break;
		}
	}
	return (0);
}
