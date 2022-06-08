#include <stdio.h>


void main(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 48; i <= 50; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 48; k <= 53; k++)
			{
				for(l = 48; l =57; i++)
				{
					if ( i >= 50 && j >= 52)
						break;
					putchar(i);
					putchar(j);
					putchar(58);
					putchar(k);
					putchar(l);
					putchar(10);	
				}
			}
		}
	}
}
