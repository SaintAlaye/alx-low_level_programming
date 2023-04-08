#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - A function that add multiple numbers
 * @argv: array of strings in command line
 * @argc: counts of arguments passed
 * Return: 0 Success
 */

int main(int argc, char *argv[])
{
	/* declaring the variables */
	int fnum, snum, add = 0;

	/* iterating through the value */
	for (fnum = 1;fnum < argc; fnum++)
	{
		for (snum =0; argv[fnum][snum] !='\0'; snum++)
		{
			if (!isdigit(argv[fnum][snum]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[fnum]);
	}
	printf("%d\n", add);
	return (0);
}
