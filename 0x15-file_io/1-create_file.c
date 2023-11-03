#include <stdio.h>

/**
 * create_file - function that creates a file
 * @filename: filename pointer variable
 * @text_content: text_content pointer variable
 * Return: 1 on success, -1 on failure
 **/
int create_file(const char *filename, char *text_content)
{
	if (!filename)
	return (-1);

	FILE *file;
	int rwr;

	file = fopen(filename, "w");

	if (file == NULL)
		return (-1);

	if (text_content != NULL)
	{
	rwr = fprintf(file, "%s", text_content);
	if (rwr < 0)
	{
		fclose(file);
	return (-1);
	}
	}

	fclose(file);
	return (1);
}
