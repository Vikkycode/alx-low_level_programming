#include "main.h"


/**
 * print_array - function that prints n elements of an array of integers,
 * followed by a new line.
 * @a: point to a
 * @n: input n
 * Return: Always 0;
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}


