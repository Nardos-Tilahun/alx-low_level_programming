#include "main.h"
#include <stdlib.h>

/**
 * appen_text_to_file - check the code
 * @filename: file name
 * @text_content: letter
 * Return: Always 0.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0;
	int p, q;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
		while (text_content[i] != '\0')
			i++;
	p = open(filename, O_CREAT | O_RDWR | O_APPEND);
	if (p == -1)
		return (-1);
	q = write(p, text_content, i);
	if (q == -1)
		return (-1);
	close(p);
	return (1);
}
