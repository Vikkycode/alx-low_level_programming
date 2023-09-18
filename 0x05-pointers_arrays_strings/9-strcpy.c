#include "main.h"

/**
 * *_strcpy -  function that copies the string pointed to by src, includin
 * g the terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: point to desc
 * @src: point to src
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
