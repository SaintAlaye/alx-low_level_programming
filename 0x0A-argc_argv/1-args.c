#include <stdio.h>
#include "main.h"
/**
 * main - a function that prints the number of arguments passed into it
 * @argv: number of array of string
 * @argc: number of arguments passed
 * Return: 0 Success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
