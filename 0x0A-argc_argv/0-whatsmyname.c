#include <stdio.h>
#include "main.h"
/**
 * main - A program that prints it own name
 * @argv: number of arrays of strings
 * @argc: number of arguments passed
 *
 * Return: 0 Success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
