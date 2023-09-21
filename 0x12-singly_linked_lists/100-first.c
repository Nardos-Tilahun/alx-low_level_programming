#include <stdio.h>

void _constructor() __attribute__((constructor));
/**
 * _constructor - print the list in linked list
 */
void _constructor()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
