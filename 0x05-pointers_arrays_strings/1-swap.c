#include "main.h"

/**
 * swap_int - function that swap the value of two integers
 * @a: input1
 * @b: input2
 * Return: a b
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
