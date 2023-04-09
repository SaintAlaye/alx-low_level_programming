#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program prints the minimum number
 * of coins to make change for an amount of money
 * @argv: arrays of string passed in command line argument
 * @argc: numbers of arguments counts
 * Return: 0 Success
 */

int main(int argc, char *argv[])
{
	/* declaring the the variables */
	int cents, rcoins = 0;
	
	/* if the number of arguments passed is not exactly 1 */
	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	
	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		rcoins += 1;
	}
	printf("%d\n", rcoins);
	return (0);
}
