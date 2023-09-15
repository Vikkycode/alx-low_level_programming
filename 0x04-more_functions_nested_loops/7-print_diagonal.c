#include "main.h"

/**
 * print_diagonal - draws a diagonal line on tne terminal
 * @n: number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}



	int i; 
	int j;


	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			if (j == i)
			{
				_putchar('\\');
			} else
			{
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
