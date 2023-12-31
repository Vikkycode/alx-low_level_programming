#include "main.h"

/**
 * _strspn - Write a function that gets the length of a prefix substring.
 * @s: s point to a char
 * @accept:accept point to a char
 * Return: n
 */
unsigned int _strspn(char *s, char *accept)
{
	int r;
	unsigned int n = 0;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
			{
				return (n);
			}
		}
		s++;
	}
	return (n);
}
