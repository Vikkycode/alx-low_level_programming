#include "main.h"
#include <stdio.h>
/**
 * main - this is the entry point of a program
 * @argc: number of argument
 * @argv: arraY of array
 * Return: Always 0(Success)
 */
int main(int argc, char *argv[])
{
	int index;

	for (index = 0; index < argc; index++)
	{
	printf("%s\n", argv[index]);
	}
	return (0);
}
