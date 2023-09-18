#include "main.h"

/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character, followed by a new line
 *@s: point to s
 *Return: Always 0
 */

void puts2(char *s)
{
	int length = 0;
	int t = 0;
	int i;
	char *y = s;

	while (*y != '\0')
	{
		y++;
		length++;
	}
	t = length - 1;
	for (i = 0; i < t; i++)
	{
		if (i % 2 == 0)
		{
		_putchar(s[i]);
		}
	}
	putchar('\n');
}
