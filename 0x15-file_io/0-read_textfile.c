#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 * read_textfile - function that read from a file that print to POSIX
 * @filename: pointer filename variable
 * @letters: letters variable
 * Return: lenw
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t lengthr, lengthw;
	char *buffer;
	int file_d;

	if (filename == NULL)
		return (0);
	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_d);
		return (0);
	}
	lengthr = read(file_d, buffer, letters);
	close(file_d);
	if (lengthr == -1)
	{
		free(buffer);
		return (0);
	}
	lengthw = write(STDOUT_FILENO, buffer, lengthr);
	free(buffer);
	if (lengthr != lengthw)
		return (0);
	return (lengthw);
}
