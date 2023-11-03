#include <stdio.h>
#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * read_textfile - function that read text from a file that print to POSIX
 *@filename: file pointer variable
 *@letters: letters variable
 * Return: lenw
**/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char buffer[letters];
	FILE *file = fopen(filename, "r");

	if (file == NULL)
	{
		return (0);
	}

	ssize_t lenr = fread(buffer, 1, letters, file);

	fclose(file);

	if (lenr < 0)
	{
		return (0);
	}

	ssize_t lenw = fwrite(buffer, 1, lenr, stdout);

	if (lenw < 0 || lenr != lenw)
	{
		return (0);
	}
	return (lenw);
}
