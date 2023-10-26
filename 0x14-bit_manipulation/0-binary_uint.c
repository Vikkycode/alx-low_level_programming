#include "main.h"

/**
 * binary_to_uint - function converts a binary number to an unsigned int.
 * @b: pointer to a string
 * Return: binary number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number;
	int i, bit;

	number = 0;
	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
			bit = 0;
		else if (b[i] == '1')
			bit = 1;
		else
			return (0);
		number += bit << i;
	}
	return (number);
}
