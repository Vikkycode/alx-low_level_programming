#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line
 * to stdout
 * @str: print to stirng
 * Return: Always 0
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str++);
	}
		putchar('\n');
}
