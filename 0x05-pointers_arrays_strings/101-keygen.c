#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
	int rpa[100];
	int i = 0, s = 0, r = 0;

	srand(time(NULL));
	while (i < 100)
	{
		rpa[i] = rand() % 92;
		s = s + (rpa[i] + 33);
		putchar(rpa[i] + 33);
		if ((5323 - s - 33) < 92)
		{
			r = 5323 - s - 33;
			putchar(r + 33);
			break;
		}
		i++;
	}
	return (0);
}
