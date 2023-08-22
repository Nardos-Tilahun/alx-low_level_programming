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
	int pas[15];
	int i = 0, s;

	s = 0;

	srand(time(NULL));

	while (i < 15)
	{
		pas[i] = rand() % 92;
		s += (pas[i] + 33);
		putchar(pas[i] + 33);
		/* 
		 * if ((4600  - s) - 33 < 92)
		 * {
		 * n = 4600 - s - 33;
		 * *s += n;
		 * putchar(n + 33);
		 * break;
		 * }
		 */
		i++;
	}
	return (0);
}
