#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * main - a function that multiply 2 numbers
 * @agrc: number of argument count
 * @argv: arrays of strings of arguments
 * Return: 0 Success
 */

int main(int argc, char *argv[])
{
	(void) argc;

	if (argv[1] && argv[2])
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
		printf("Error\n");

	return (1);
}
