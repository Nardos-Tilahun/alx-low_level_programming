#include "main.h"

/**
 *times_table - it is time table for 9
 *
 *@i: it takes the arguement
 *
 *Return: void for response
 */

void times_table(int i)
{	
	int j;
	int m;

	for (i = 0; i =< 9; i++)
	{
		for (j = 0; j =< 9; j++)	
		{
			m = j * i; 
			_putchar('m');
			_putchar('\,');
			_putchar('\ ');	
		}
		_putchar(10);
	}
}
