#include "main.h"
/**
 * flip_bits - counts the number of bits to change to get from one number
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int exclusive = n ^ m;
	unsigned int countbit = 0;

	while (exclusive > 0)
	{
		countbit += exclusive & 1;
		exclusive >>= 1;
	}

	return (countbit);
}
