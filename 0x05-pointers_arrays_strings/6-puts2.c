#include "main.h"

/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character, followed by a new line
 *@str: point to str
 *Return: Always 0
 */

void puts2(char *str)
{
	int length = 0;
	int t = 0;
	int i;
	char *y = str;

	while (*y != '\0')
	{
		y++;
		length++;
	}
	t = length - 1;
	for (i = 0; i <= t; i++)
	{
		if (i % 2 == 0)
		{
		_putchar(str[i]);
		}
	}
	_putchar('\n');
}
