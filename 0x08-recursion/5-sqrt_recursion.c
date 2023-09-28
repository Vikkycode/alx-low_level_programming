#include "main.h"

/**
 * sqrt_a - square root
 *@a: a number
 *@b: b number
 *Return: 1 or -1
 */

int sqrt_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqrt_a(a, b + 1));
}
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: n number
 * Return: n
 */
int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}
