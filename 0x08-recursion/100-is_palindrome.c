#include "main.h"
/**
 * _strlen_recursion - length of a string
 * @s: pointer to a string
* Return: 1 or 0
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * compare_string - compare each character of the string
 * @s: pointer to a string
 * @left:smallest iterator
 * @right: largest iterator
 * Return: int
 */
int compare_string(char *s, int left, int right)
{
	if (*(s + left) == *(s + right))
	{
		if (left == right || left ==  right + 1)
				return (1);
			return (0 + compare_string(s, left + 1, right - 1));
	}
	return (0);
}
/**
 * is_palindrome - detect if a string is a palindrome
 * @s: pointer to a string
 * Return: 1 if it isa pali ..., 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare_string(s, 0, _strlen_recursion(s) - 1));
}
