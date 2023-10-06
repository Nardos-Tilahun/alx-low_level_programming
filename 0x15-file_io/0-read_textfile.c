#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - check the code
 * @filename: file name
 * @letters: letter
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n;
	ssize_t m, p;
	char *buff;

	if (filename == NULL)
	{
		return (0);
	}
	p = open(filename, O_RDONLY);
	if (p == -1)
		return (0);
	buff = (char *)malloc(letters * sizeof(char));
	if (buff == NULL)
	{
		return (0);
	}
	n = read(p, buff, letters);
	m = write(STDOUT_FILENO, buff, n);
	free(buff);
	close(p);
	return (m);
}
