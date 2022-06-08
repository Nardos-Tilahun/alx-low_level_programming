#include "main.h"

/**
 *times_table - it is time table for 9
 *
 *@i: it takes the arguement
 *
 *Return: void for response
 */

void times_table(void)
{	
	int i;
	int j;
	int m;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)	
		{
			m = j * i; 

			_putchar(m);
			_putchar(44);
			_putchar(32);	
		}
		_putchar(10);
	}
}
