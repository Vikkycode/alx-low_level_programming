#include "main.h"

/**
 * puts_half- function that prints half of a string, followed by a new lin
 * @str: point to string
 * Return: length
 */

void puts_half(char *str)
{
	int length = 0;

	while (*str != '\0')
	{
		length++;
		str++;
	}

	return(length);
}
