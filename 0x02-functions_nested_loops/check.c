#include <stdio.h>

main (void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 97; j <=122; j++)
		{
			putchar(j);
		}
		putchar(10);
	}
}
