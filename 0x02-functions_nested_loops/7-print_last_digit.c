#include "main.h"

/**
 * print_last_digit - functions that print last digital
 *@num: function parameter
 * Return: Always 0.
 */

int print_last_digit(int num)
{

	int lastDigit;

	lastDigit = num % 10;

	if (lastDigit < 0)
		lastDigit = -lastDigit;
	_putchar(lastDigit + 'O');
	return (lastDigit);
}
