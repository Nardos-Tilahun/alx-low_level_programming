#include <stdio.h>
#include "main.h"

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
	FILE *fP;
	char *buff;

	if (filename == NULL)
	{
		return (0);
	}
	fP = fopen(filename, "r");
	if (fP == NULL)
	{
		return (0);
	}
	p = fileno(fP);
	if (p == -1)
		return (0);	
	buff = (char *)malloc(letters * sizeof(char));
	if (buff == NULL)
	{
		fclose(fP);
		return (0);
	}
	n = read(p, buff, letters);
	m = write(1, buff, n);
	free(buff);
	fclose(fP);
	return (m);
}
