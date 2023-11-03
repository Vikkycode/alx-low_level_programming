#include "main.h"
#include <stdio.h>

/**
 * append_text_to_file - function that appends at the end of a file
 * @filename:filename pointer variable
 * @text_content: text_content pointer variable
 * Return: 1 or -1
 **/

int append_text_to_file(const char *filename, char *text_content)
{
	int i, x, len;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	i = open(filename, O_WRONLY | O_APPEND);
	x = write(i, text_content, len);
	if (i == -1 || x == -1)
		return (-1);

	close(i);

	return (1);
}
