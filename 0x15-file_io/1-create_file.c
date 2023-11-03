#include "main.h"

/**
 * create_file - function that create a file
 * @filename:filename pointer variable
 * @text_content: text_content pointer variable
 * Return: 1 or -1
 **/

int create_file(const char *filename, char *text_content)
{
	int nLetters, file_d, rwr;

	if (!filename)
		return (-1);
	file_d = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_d == -1)
		return (-1);

	if (!text_content)
		text_content = "";
	for (nLetters = 0; text_content[nLetters]; nLetters++)

		rwr = write(file_d, text_content, nLetters);
	if (rwr == -1)
		return (-1);

	close(file_d);
	return (1);
}
