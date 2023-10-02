#include "main.h"
#include <stdlib.h>

/**
 * append_text_to_file - check the code
 * @filename: file name
 * @text_content: letter
 * Return: Always 0.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t n;
	ssize_t m, p;
	char *buff;

	if (filename == NULL)
	{
		return (0);
	}
	p = open(filename, O_APPEND);
	if (p == -1)
	{
		return (0);
	}
	n = read(p, buff, letters);
	m = write(1, buff, n);
	free(buff);
	close(p);
	return (m);
}
