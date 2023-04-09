#include <stdio.h>
#include "main.h"

/**
 * main - a function that prints all the
 * arguments passed into it including the 
 * first one
 * @argc: number of argument count passed
 * @argv: arrays of string of argument
 * Return 0
 */

int main (int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}

	return (0);
}
