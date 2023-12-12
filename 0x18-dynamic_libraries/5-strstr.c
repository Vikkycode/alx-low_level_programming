#include  "main.h"

/**
 * *_strstr - Write a function that locates a substring
 * @haystack: haystack point to a char
 * @needle: needle point to a char
 * Return:0
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			}
		while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
