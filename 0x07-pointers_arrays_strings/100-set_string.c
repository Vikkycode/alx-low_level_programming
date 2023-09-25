#include "main.h"

/**
 * set_string - Write a function that sets the value of a pointer to a char.
 * @s: s point to a point of another variable
 * @to: to point to a char
 * Return: 0;
 */

void set_string(char **s, char *to)
{
	*s = to;
}
