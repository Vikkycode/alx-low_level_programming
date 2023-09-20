#include "main.h"

/**
 * reverse_array - Write a function that reverses
 * the content of an array of integers.
 *@a: a parameter
 *@n: n parameter
 *Return: always 0
 */

void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}


