#include <stdio.h>
/**
 * main - function parameter
 *
 * Return: Always 0;
 */

int main(void)
{
	int sum = 0;
	int i;

	while (i < 1024)
	{
	if ((i % 3 == 0) || (i % 5 == 0))
	{
	sum += i;
	}
	i++;
	}
	printf("%d\n", sum);
	return (0);
}

