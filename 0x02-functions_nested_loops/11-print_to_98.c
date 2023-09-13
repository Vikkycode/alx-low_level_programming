#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - function that prints all natural numbers
 *@n: function parameter
 * Return: Awlays 0;
 */

void print_to_98(int n)
{
	for (; n <= 98; n++)
	{
	if (n == 98)
	{
	printf("%d", n);
	printf("\n");
	break;
	}
	else
	{
	printf("%d, ", n);
	}
	}
	for (; n >= 98; n--)
	{
	if (n == 98)
	{
	printf("%d", n);
	printf("\n");
	break;
	}
	else
	{
	printf("%d, ", n);
	}
	}
}


