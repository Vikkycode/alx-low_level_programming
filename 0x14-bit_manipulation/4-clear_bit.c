#include "main.h"
/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index.
 * @n: pointer to the number
 * @index: index at which to clear the bit (0 is the rightmost bit)
 * Return: 1 if success, or -1 if an error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	return (-1);
	*n = *n & ~(1UL << index);
	return (1);
}
