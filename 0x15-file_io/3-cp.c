#include "main.h"
#include <stdlib.h>

/**
 * print_error - check the code
 * @error: file name
 * @filename: letter
 * @ec: error
 * Return: Always 0.
 */


void print_error(const char *error, const char *filename, int ec)
{
	dprintf(2, error, filename);
	exit(ec);
}
/**
 * print_err - check the code
 * @error: file name
 * @fd: letter
 * @ec: error
 * Return: Always 0.
 */

void print_err(const char *error, const int fd, int ec)
{
	dprintf(2, error, fd);
	exit(ec);
}
/**
 * cp - check the code
 * @fileS: file name
 * @fileD: letter
 * Return: Always 0.
 */
int cp(const char *fileS, char *fileD)
{
	int p, q;
	ssize_t bR, bW;
	char *buff;
	mode_t mod;

	buff = (char *)malloc(sizeof(char) * 1024);
	if (buff == NULL)
		print_error("Error: Can't write to %s\n", fileD, 99);
	p = open(fileS, O_RDONLY);
	if (p == -1)
		print_error("Error: Can't read from file %s\n", fileS, 98);
	mod = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	q = open(fileD, O_CREAT | O_WRONLY | O_TRUNC, mod);
	if (q == -1)
		print_error("Error: Can't write to %s\n", fileD, 99);
	while ((bR = read(p, buff, sizeof(buff))) > 0)
	{
		q = open(fileD, O_WRONLY | O_APPEND);
		bW = write(q, buff, bR);
		if (bW == -1)
			print_error("Error: Can't write to %s\n", fileD, 99);
	}
	if (bR == -1)
		print_error("Error: Can't read from file %s\n", fileS, 98);
	if (close(p) == -1)
		print_err("Error: Can't close fd %d\n", p, 100);
	if (close(q) == -1)
		print_err("Error: Can't close fd %d\n", q, 100);
	return (1);
}
/**
 * main - check the code
 * @ac: count
 * @av: vector
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int res;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}
	res = cp(av[1], av[2]);
	return (res);
}
