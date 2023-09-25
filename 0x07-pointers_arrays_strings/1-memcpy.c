#include "main.h"

/**
 * *_memcpy - Write a function that copies memory area.
 *@dest: dest point to a char
 *@src: src point to a char
 *@n: n input
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r;
	int i = n;

	for (r = 0; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
