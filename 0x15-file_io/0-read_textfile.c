#include "main.h"
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>

/**
 * read_textfile - function that read from a file that print to POSIX
 * @filename: pointer filename variable
 * @letters: letters variable
 * Return: lenw
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t lenread;
	ssize_t lenwrite;
	int file_d;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_d);
		return (0);
	}
	lenread = read(file_d, buffer, letters);
	close(file_d);
	if (lenread == -1)
	{
		free(buffer);
		return (0);
	}
	lenwrite = write(STDOUT_FILENO, buffer, lenread);
	free(buffer);
	if (lenread != lenwrite)
		return (0);
	return (lenwrite);
}
