#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: number to check bit
 * @index: index at which to check bit (0 is the rightmost bit)
 * Return: the specified index, or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
    if (index >= sizeof(unsigned long int) * 8)
        return (-1);
    return (int)((n >> index) & 1);
}
