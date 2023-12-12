#include "main.h"

/**
 * *_strchr - Write a function that locates a character in a string.
 *@s: s point to a char
 *@c: c input
 *Return: 0
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
		{
			return (&s[index]);
		}
	}
	return (0);
}
