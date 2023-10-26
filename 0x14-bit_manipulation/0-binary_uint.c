#include "main.h"
/**
 * binary_to_uint - a function converts a binary number to an unsigned int.
 * @b: pointer to a string
 * Return: binary number, or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
	return (0);

	unsigned int num = 0;

	for (int i = 0; b[i] != '\0'; i++)
	{
	if (b[i] == '0' || b[i] == '1')
	{
		num = num * 2 + (b[i] - '0');
	}
	else
	{
		return (0);
	}
	}
	return (num);
}
