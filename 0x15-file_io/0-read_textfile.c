#include "main.h"
#include <stdio.h>
/**
 * read_textfile - function that read from a file that print to POSIX
 * @filename: pointer filename variable
 * @letters: letters variable
 * Return: lenw
 **/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t lenread, lenwrite;
	FILE *file;
	char *butter[letters];

	if (filename == NULL)
	{
	return (0);
	}

	file = fopen(filename, "r");

	if (file == NULL)
	{
		return (0);
	}
	lenread = fread(buffer, 1, letters, file);

	fclose(file);

	if (lenread < 0)
	{
		return (0);
	}

	lenwrite = fwrite(buffer, 1, lenr, stdout);

	if (lenwrite < 0 || lenread != lenwrite)
	{
		return (0);
	}
	return (lenwrite);
}
