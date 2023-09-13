#include "main.h"

/**
 * print_last_digit - functions that print last digital
 *@i: function parameter
 * Return: Value of the last digit of number.
 */

int print_last_digit(int i)
{

	int k;

	k = i % 10;
	if (k < 0)
		k = k * -1;
	_putchar(k +'0');
	return (k);
}
