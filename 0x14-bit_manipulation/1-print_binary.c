#include "main.h"
/**
 * print_binary -function that  prints a number in binary notation
 * @n: number to print
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i;
	int flag = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = (sizeof(unsigned long int) * 8 - 1); i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag)
		{
			_putchar('0');
		}
	}
}
