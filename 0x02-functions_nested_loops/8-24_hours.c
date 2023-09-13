#include "main.h"

/**
 * jack_bauer - function that print 24 hours
 *
 * Return: Always 0.
 */

void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar(i / 10 + 'O');
			_putchar(i % 10 + 'O');
			_putchar(':');
			_putchar(j / 10 + 'O');
			_putchar(j % 10 + 'O');
			_putchar('\n');
		}
	}
}
